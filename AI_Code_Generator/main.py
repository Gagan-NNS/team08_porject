import torch
from transformers import AutoModelForCausalLM, AutoTokenizer

# Load the AI Model
MODEL_NAME = "bigcode/starcoder"
tokenizer = AutoTokenizer.from_pretrained(MODEL_NAME)
model = AutoModelForCausalLM.from_pretrained(MODEL_NAME, torch_dtype=torch.float32)

# Function to generate code
def generate_code(prompt):
    inputs = tokenizer(prompt, return_tensors="pt")
    outputs = model.generate(**inputs, max_length=200)
    return tokenizer.decode(outputs[0], skip_special_tokens=True)

# Run the code generator
if __name__ == "__main__":
    user_prompt = input("Enter your code prompt: ")
    generated_code = generate_code(user_prompt)
    print("\nGenerated Code:\n", generated_code)
