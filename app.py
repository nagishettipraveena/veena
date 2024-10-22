from flask import Flask, render_template, request, redirect, url_for, flash

app = Flask(__name__)
app.secret_key = 'your_secret_key'  # Required for flashing messages

@app.route('/', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        username = request.form['username']
        email = request.form['email']
        
        # Basic validation
        if not username or not email:
            flash('Please fill out all fields!', 'error')
            return redirect(url_for('register'))
        
        # Here you can save to a database or perform additional logic
        flash(f'Registration successful for {username}!', 'success')
        return redirect(url_for('register'))
    
    return render_template('register.html')

if __name__ == '__main__':
    app.run(debug=True)
