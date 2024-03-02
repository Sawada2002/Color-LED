// Get references to HTML elements
const redSlider = document.getElementById('redValue');
const greenSlider = document.getElementById('greenValue');
const blueSlider = document.getElementById('blueValue');
const redDisplay = document.getElementById('redDisplay');
const greenDisplay = document.getElementById('greenDisplay');
const blueDisplay = document.getElementById('blueDisplay');
const colorBox = document.getElementById('colorBox');

// Function to update RGB values and display
function updateColor() {
  const red = parseInt(redSlider.value);
  const green = parseInt(greenSlider.value);
  const blue = parseInt(blueSlider.value);

  redDisplay.textContent = red;
  greenDisplay.textContent = green;
  blueDisplay.textContent = blue;

  const color = `rgb(${red}, ${green}, ${blue})`;
  colorBox.style.backgroundColor = color;
}

// Add event listeners to sliders
redSlider.addEventListener('input', updateColor);
greenSlider.addEventListener('input', updateColor);
blueSlider.addEventListener('input', updateColor);

// Initialize color display
updateColor();
