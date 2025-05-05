// For login.html
function loginUser() {
    window.location.href = "request.html";
    return false;
  }
  
  // For request.html
  function submitRequest(event) {
    event.preventDefault();
  
    const data = {
      name: document.getElementById("name").value,
      reason: document.getElementById("reason").value,
      date: document.getElementById("date").value,
      time: document.getElementById("time").value
    };
  
    localStorage.setItem("outpassData", JSON.stringify(data));
    window.location.href = "confirmation.html";
  }
  
  // For confirmation.html
  window.onload = () => {
    if (window.location.pathname.includes("confirmation.html")) {
      const data = JSON.parse(localStorage.getItem("outpassData"));
      const details = document.getElementById("details");
      if (data) {
        details.innerHTML = `
          <p><strong>Name:</strong> ${data.name}</p>
          <p><strong>Reason:</strong> ${data.reason}</p>
          <p><strong>Date:</strong> ${data.date}</p>
          <p><strong>Time:</strong> ${data.time}</p>
        `;
      } else {
        details.innerHTML = "<p>No request data found.</p>";
      }
    }
  };
  
