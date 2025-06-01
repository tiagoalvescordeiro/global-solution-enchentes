# 🌱 ESP32 com Sensor de Umidade do Solo – Simulação no Wokwi

Este projeto simula um sistema de leitura de umidade do solo utilizando um ESP32 e um sensor analógico, com foco no monitoramento de risco de enchentes dentro da proposta da **Global Solution 2025.1 - FIAP**.

---

## 🔧 Componentes Simulados
- **ESP32 DevKit V1**
- **Sensor de Umidade do Solo (simulado com potenciômetro)**
- **Conexões:**
  - `VCC` → 3.3V do ESP32
  - `GND` → GND do ESP32
  - `S` (Sinal) → GPIO34 do ESP32 (entrada analógica)

---

## 📁 Estrutura dos Arquivos

| Arquivo              | Descrição |
|----------------------|-----------|
| `sketch.ino`         | Código Arduino para leitura da umidade via `analogRead()` |
| `diagram.json`       | Arquivo do Wokwi que define a ligação entre ESP32 e sensor |
| `wokwi-project.txt`  | Contém o link direto para simulação online |

---

## ▶️ Como Executar a Simulação

1. Acesse o projeto no Wokwi pelo link:  
   **[Simular no Wokwi](https://wokwi.com/projects/432598699516601345)**

2. Clique em **"Play"** (botão verde) para iniciar a simulação.

3. Gire o potenciômetro para variar a leitura de umidade no terminal serial.

---

## 📦 Dependências
Nenhuma biblioteca externa é necessária. A simulação utiliza apenas recursos básicos do Arduino e do Wokwi.

---

## 🎯 Objetivo Educacional
Este protótipo serve como base para integrar sensores reais ao ESP32 em futuras etapas do projeto, possibilitando:
- Monitoramento em tempo real de umidade;
- Acionamento preventivo de alarmes ou bombas;
- Envio de dados para banco de dados ou IA de previsão.