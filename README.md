
# 🌊 Global Solution 2025.1 – Previsão de Enchentes com Machine Learning

Este repositório apresenta uma solução prática e integrada para **previsão de risco de enchentes** no Brasil, desenvolvida no contexto da disciplina de Inteligência Artificial Aplicada - FIAP.

## 🎯 Objetivo
Utilizar dados reais e simulados para treinar um modelo de Machine Learning capaz de prever, com antecedência, o risco de enchentes, contribuindo com a mitigação de desastres naturais.

---

## 🧰 Tecnologias Utilizadas

- Python
- Google Colab
- Pandas, NumPy, scikit-learn, matplotlib
- Random Forest (classificação)
- Joblib (para salvar o modelo)
- GitHub

---

## 📁 Estrutura do Projeto

```
📦global-solution-enchentes
 ┣ 📄 modelo_random_forest.ipynb  → notebook com todo o processo
 ┣ 📄 modelo_risco.pkl            → modelo Random Forest salvo
```

---

## 📊 Variáveis de Entrada

- `chuva_1h`, `chuva_6h`, `chuva_24h` – Volume de chuva recente
- `nivel_rio` – Nível atual do rio
- `tendencia_rio` – Subindo, estável ou descendo
- `umidade`, `vento` – Condições ambientais

---

## ✅ Resultados

- **Modelo**: Random Forest
- **Acurácia**: 97%
- **Métrica principal**: Matriz de confusão e f1-score
- **Variáveis mais importantes**: Chuva 24h, nível do rio, vento

---

## 📦 Como usar

1. Faça o clone do repositório
2. Instale as dependências com `pip install -r requirements.txt` (se houver)
3. Carregue o modelo `.pkl` e use para previsões

---

## 🤝 Colaboradores

- Tiago Alves Cordeiro  
- [Outros integrantes, se houver]

---

## 🛟 Impacto Social

Este projeto simula uma aplicação real com potencial para salvar vidas, fornecendo alertas antecipados sobre enchentes com base em dados ambientais.
