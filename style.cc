style.css
body {
    margin: 0;
    padding: 0;
    background: linear-gradient(to bottom, #0000ff, #ffffff); /* Gradiente de azul escuro para branco */
    font-family: Arial, sans-serif;
}

.container {
    display: flex;
    flex-wrap: wrap;
    justify-content: center;
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
}

.card {
    background-color: #fff;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
    margin: 10px;
    padding: 15px;
    border-radius: 8px;
    transition: transform 0.2s; /* Adiciona um efeito de transição de zoom */
}

.card img {
    max-width: 100%;
    height: auto;
}

.card p {
    font-size: 16px;
    margin-top: 10px;
}

.card .botao-comprar {
    display: block;
    background-color: #ff9900;
    color: #fff;
    text-decoration: none;
    padding: 10px 20px;
    border-radius: 5px;
    font-weight: bold;
    margin-top: 10px;
}

.card:hover {
    transform: scale(1.05); /* Zoom ao passar o mouse */
}
