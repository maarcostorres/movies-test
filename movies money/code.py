class Filme:
    def __init__(self, titulo, lucro):
        self.titulo = titulo
        self.lucro = lucro

def classificar_filmes(filmes):
    filmes.sort(key=lambda x: x.lucro, reverse=True)

def exibir_classificacao(filmes):
    print("{:<4}{:<40}{:<20}".format("Rank", "Título", "Lucro (em bilhões USD)"))
    print("======================================================")
    for i, filme in enumerate(filmes, start=1):
        print("{:<4}{:<40}{:<20.2f}".format(i, filme.titulo, filme.lucro))

# Dados fictícios de filmes
filmes = [
    Filme("Avatar", 2.847),
    Filme("Vingadores: Ultimato", 2.798),
    Filme("Titanic", 2.194),
    Filme("Star Wars: Episódio VII - O Despertar da Força", 2.068),
    Filme("Vingadores: Guerra Infinita", 2.048)
]

# Classificar filmes pelo lucro
classificar_filmes(filmes)

# Exibir tabela de classificação
exibir_classificacao(filmes)
