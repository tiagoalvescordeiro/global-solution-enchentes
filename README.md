🌊 **Global Solution 2025.1 – Previsão de Enchentes com Machine Learning**

Este repositório apresenta uma solução prática e integrada para **previsão de risco de enchentes no Brasil**, desenvolvida no contexto da disciplina de Inteligência Artificial Aplicada - FIAP.

---

## 🎯 Objetivo

Desenvolver um sistema inteligente e conectado capaz de **monitorar condições ambientais** (via sensores) e **prever o risco de enchentes** nas próximas horas com base em dados reais, utilizando algoritmos de machine learning, integração IoT (ESP32) e análise de dados.

---

## 🧩 Tecnologias e Disciplinas Integradas

| Disciplina                  | Aplicação no Projeto                                                                 |
|----------------------------|----------------------------------------------------------------------------------------|
| **Lógica de Programação**  | Estrutura do algoritmo, condições e laços de repetição no código Python e Arduino     |
| **Python + Scikit-learn**  | Treinamento de modelo Random Forest para prever risco com base em variáveis ambientais|
| **Banco de Dados**         | Armazenamento dos dados simulados e do modelo treinado (`.pkl`)                      |
| **Arduino/IoT com ESP32**  | Simulação de sensor de umidade para representar volume de água em área crítica       |
| **Estatística (R/Python)** | Análise exploratória de dados meteorológicos e ambientais (fora deste repositório)   |

---

## 📁 Estrutura do Projeto

```bash
global-solution-enchentes/
├── README.md                      # Apresentação geral do projeto
├── modelo_random_forest (1).ipynb # Treinamento do modelo de ML (Random Forest)
├── modelo_risco.pkl               # Modelo salvo via Joblib
├── requirements.txt               # Dependências do ambiente Python
└── esp32_sensor/                  # Subpasta com simulação Wokwi (ESP32 + sensor)
    ├── README_esp32_sensor.md     # Explicação da montagem e funcionamento
    ├── sketch.ino                 # Código-fonte Arduino (C++) da simulação
    ├── diagram.json               # Diagrama de ligação do sensor no Wokwi
    ├── wokwi-project.txt          # Link direto para o projeto no Wokwi
    ├── requirements.txt           # Dependências específicas (se necessário)
    └── .gitkeep                   # Placeholder para manter pasta no Git
```

---

## 🔗 Link da Simulação (ESP32 + Sensor de Umidade)

- 🌐 [Acessar Projeto no Wokwi](https://wokwi.com/projects/432598699516601345)

---

## 📌 Como Executar

### 🔹 Ambiente Python
1. Clone este repositório:
   ```bash
   git clone https://github.com/tiagoalvescordeiro/global-solution-enchentes.git
   cd global-solution-enchentes
   ```
2. Instale os pacotes:
   ```bash
   pip install -r requirements.txt
   ```
3. Execute o notebook `modelo_random_forest (1).ipynb` no Google Colab ou Jupyter.

### 🔹 Simulação ESP32
- Acesse o link acima e clique em ▶️ “Start Simulation”.
- Observe os dados de umidade no monitor serial simulando o ambiente.

---

## ✅ Resultados Esperados

- Sistema funcional que:
  - Simula um sensor coletando dados de campo.
  - Envia dados para análise com algoritmo de machine learning.
  - Gera um alerta de risco de enchente com base na previsão.

---

## 👥 Autores

> Desenvolvido por estudantes do curso de Inteligência Artificial da FIAP, Fase 4, Turma 1TIAO - 2025.

---
