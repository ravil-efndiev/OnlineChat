import React from 'react';
import logo from './logo.svg';
import './App.css';
import axios from 'axios'

function App() {
  axios.get('http://localhost:5000/register/hello', {})
    .then(function (response) {
      console.log(response.data);
    }
  );

  return (
    <div className="App">

    </div>
  );
}

export default App;
