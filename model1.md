# GLM-5.2 Model Card Summary

## Model Information

* **Model Name:** GLM-5.2
* **Organization:** Z.ai (`zai-org`)
* **Task:** Text Generation
* **License:** MIT
* **Model Type:** Mixture of Experts (MoE) Large Language Model
* **Model Size:** 753 Billion Parameters (approximately 40B active parameters per token)
* **Tensor Type:** BF16
* **Context Window:** Up to 1,000,000 tokens

---

# Overview

GLM-5.2 is Z.ai's flagship open-weight large language model designed for:

* Long-context reasoning
* Software engineering
* Coding assistants
* Agentic AI workflows
* Complex reasoning tasks

Compared to GLM-5.1, it significantly improves coding performance while supporting an extremely large 1 million token context window.

---

# Architecture

* Mixture of Experts (MoE)
* Approximately 753B total parameters
* Approximately 40B parameters activated per token
* Deep Sparse Attention (DSA)
* IndexShare attention optimization
* Multi-Token Prediction (MTP)
* Supports speculative decoding

---

# Training Details

The complete training configuration has **not been publicly released**.

Available public information includes:

* Asynchronous Reinforcement Learning (RL)
* Agent RL optimization
* Long-context training
* Deep Sparse Attention architecture
* IndexShare optimization
* Improved speculative decoding

The exact values for:

* Number of GPUs
* GPU type
* Batch size
* Learning rate
* Optimizer
* Epoch count
* Total training FLOPs

have not been disclosed by the authors.

---

# Dataset

The model card does **not publish the complete training dataset**.

Publicly available information indicates training used a large multilingual corpus containing:

* Web documents
* Programming source code
* Mathematical data
* Reasoning datasets
* Instruction-following data
* Agent interaction data

Exact dataset names, sizes, and percentages have not been released.

---

# Benchmarks

Selected benchmark scores:

| Benchmark          | Score |
| ------------------ | ----: |
| HLE                |  40.5 |
| GPQA Diamond       |  91.2 |
| SWE-bench Pro      |  62.1 |
| NL2Repo            |  48.9 |
| Terminal Bench 2.1 |  81.0 |
| DeepSWE            |  46.2 |
| AIME 2026          |  99.2 |

---

# Key Features

* 1M token context window
* Open-weight model
* MIT License
* Strong coding capabilities
* Long-horizon reasoning
* Agentic task optimization
* Improved sparse attention
* Efficient MoE inference

---

# Inference Frameworks

Officially supported:

* Hugging Face Transformers
* vLLM
* SGLang
* KTransformers
* Unsloth
* Ascend NPU frameworks

---

# Usage Example

```python
from transformers import pipeline

pipe = pipeline(
    "text-generation",
    model="zai-org/GLM-5.2"
)

response = pipe(
    [{"role":"user","content":"Explain Mixture of Experts"}]
)
```

---

# Limitations

The following information is **not publicly available**:

* Full training dataset
* Dataset proportions
* Training hardware
* Learning rate schedule
* Batch size
* Number of epochs
* Optimizer configuration

---

# References

* Hugging Face Model Card
* GLM-5 Technical Report (arXiv)
* Z.ai Official Documentation
