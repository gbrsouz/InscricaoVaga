import json

def p_faturamento(arquivo_json):
    with open(arquivo_json, 'r') as file:
        dados = json.load(file)
    faturamento = [item['valor'] for item in dados['faturamento']]
    faturamento_validos = [valor for valor in faturamento if valor > 0]
    if not faturamento_validos:
        print("Não há dados de faturamento válidos.")
        return
    menor = min(faturamento_validos)
    maior = max(faturamento_validos)
    media = sum(faturamento_validos) / len(faturamento_validos)
    dias = sum(1 for valor in faturamento_validos if valor > media)
    print(f"Menor valor de faturamento: R${menor:.2f}")
    print(f"Maior valor de faturamento: R${maior:.2f}")
    print(f"Número de dias com faturamento acima da média: {dias}")
p_faturamento('faturamento.json')

