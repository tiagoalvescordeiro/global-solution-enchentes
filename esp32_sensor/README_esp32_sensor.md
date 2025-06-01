# Simulação ESP32 com Sensor de Umidade do Solo 🌱

Este projeto simula um sistema de monitoramento de umidade do solo utilizando a placa **ESP32** em conjunto com um sensor analógico (simulado via potenciômetro no Wokwi). A simulação faz parte da solução integrada da *Global Solution 2025.1 – Previsão de Enchentes com Machine Learning* (FIAP).

## 🔧 Componentes Simulados

- ESP32 DevKit v1
- Potenciômetro representando o sensor de umidade do solo (entrada analógica)
- Comunicação via Serial Monitor

## 💻 Código

O script `sketch.ino` realiza a leitura analógica da umidade e imprime os valores no monitor serial a cada 1 segundo.

```cpp
#define SENSOR_PIN 34 // GPIO34

void setup() {
  Serial.begin(115200);
  Serial.println("Monitorando umidade do solo...");
}

void loop() {
  int umidade = analogRead(SENSOR_PIN);
  Serial.print("Umidade do solo: ");
  Serial.println(umidade);
  delay(1000); // Espera 1 segundo
}
```

## 🌐 Link da Simulação

Você pode acessar e testar a simulação diretamente no Wokwi:

🔗 [Simulação no Wokwi](https://wokwi.com/projects/432598699516601345)

> Gire o potenciômetro para simular variações de umidade do solo.

## 📁 Arquivos

- `sketch.ino`: código-fonte da simulação
- `diagram.json`: esquema de conexão no Wokwi
- `wokwi-project.txt`: configuração de projeto Wokwi
- `requirements.txt`: dependências do ambiente (se necessário)

## 🧠 Integração com Global Solution

Os dados simulados podem ser utilizados para alimentar modelos de previsão de enchentes, permitindo testes de leitura e integração com bancos de dados e scripts de Machine Learning em Python/R.
