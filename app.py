from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('ur.py')

@app.route('/register', methods=['POST'])
def register():
    name = request.form['name']
    email = request.form['email']
    return f'Registered {name} with email {email}'

if __name__ == "__main__":
    app.run(host='0.0.0.0', port=8090)
