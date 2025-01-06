# Simulação de Cálculos de Termodinâmica de Combustão

![C](https://img.shields.io/badge/language-C-green)
![License](https://img.shields.io/badge/license-MIT-blue)
![Status](https://img.shields.io/badge/status-Development-yellow)

Este repositório contém um código C desenvolvido para simulação de cálculos relacionados à termodinâmica de combustão, com foco em vários fatores que influenciam as chamas e o comportamento do combustível.

## Técnicas Utilizadas

O código utiliza métodos de termodinâmica aplicados a sistemas de combustão, especificamente com foco em variáveis como:

- **Geometria da chama**: Cálculos de largura, altura e distância relacionados à combustão.
- **Distribuição de calor**: Cálculo da intensidade e distribuição de energia ao longo de uma câmara de combustão.
- **Fatores de configuração de chama**: Considerando a forma, características e variáveis para determinar a eficiência e comportamento térmico.
- **Cálculos de temperatura**: Avaliação da propagação de calor e temperatura ao longo do sistema.
- **Análise de temperatura e velocidade**: Cálculos detalhados de temperaturas nas diversas zonas de combustão.
  
As principais variáveis são manipuladas com base em medidas experimentais e fatores definidos empiricamente, além de uma série de simplificações para permitir a execução do modelo.

### Funções Principais

1. **Fatores de Chama**: Calcula os fatores de configuração da chama, levando em consideração diferentes variáveis, como altura, largura, distância entre elementos e características do combustível.
2. **Análise de Temperatura**: Cálculos focados na temperatura, levando em consideração diferentes camadas e zonas de combustão.
3. **Cálculos de Velocidade e Efeito de Pressão**: Determina os efeitos da velocidade do fluxo de combustível e o impacto da pressão nas zonas de combustão.
4. **Análise de Situação de Combustão**: Determina em que situação de combustão o sistema se encontra, e qual o impacto disso na formação da chama.

### Parâmetros Utilizados

- **h**: Altura da câmara de combustão.
- **w**: Largura da câmara de combustão.
- **r**: Raio.
- **d1, d2**: Distâncias associadas ao sistema de combustão.
- **Q**: Taxa de calor gerado.
- **tz, tf, tz1, tz2**: Temperaturas variadas associadas à combustão.
- **z**: Variável de controle relacionada à propagação de calor.

### Fluxo do Algoritmo

1. O algoritmo começa solicitando entradas para as variáveis principais, como temperatura, largura, altura, e outros parâmetros.
2. Em seguida, ele executa uma série de cálculos baseados em equações de propagação de calor e geometria da chama.
3. As diferentes variáveis e condições são avaliadas para determinar em qual "situação de combustão" o sistema se encontra.
4. O código então calcula a intensidade da chama com base nas condições fornecidas, gerando uma saída que pode ser usada para ajustes no processo de combustão.

### Exemplo de Entrada

- **Dv**: 1.5
- **D**: 0.3

### Exemplo de Saída

- **fif1**: 1.245
- **fif2**: 0.890
- **fif3**: 1.423
- **fif4**: 1.100

### Compilação e Execução

Para compilar o código, utilize o compilador `gcc`:

```bash
gcc -o simulacao combustao.c -lm
