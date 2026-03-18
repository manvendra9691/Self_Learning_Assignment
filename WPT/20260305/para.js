function changecolor() {
    // 1. Get the color value from your input
    const selectedColor = document.getElementById('colourpicker').value;
    
    // 2. Select all elements with the class "color-text"
    const paragraphs = document.querySelectorAll('.color-text');
    
    // 3. Loop through each paragraph and apply the color
    paragraphs.forEach(para => {
        para.style.color = selectedColor;
    });
}
