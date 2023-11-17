const express = require('express');
const app = express();
const port = 3001;

app.get('/:peso/:altura', (req, res) => {
  const peso = parseFloat(req.params.peso);
  const altura = parseFloat(req.params.altura);
  
  if (isNaN(peso) || isNaN(altura)) {
    res.status(400).send('Parâmetros inválidos. Use números válidos para peso e altura.');
    return;
  }

  const imc = peso / (altura * altura);
  res.send(`Seu IMC é: ${imc.toFixed(2)}`);
});

app.listen(port, () => {
  console.log(`Servidor rodando em http://localhost:${port}`);
});
