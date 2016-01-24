# Description

Setting up a new node project on your local with es6 modules is boring, and the information out there is friendly
enough to not waste your time.  This command will automate this process so with one command and a few prompts
you can get right to coding the project rather than setting it up.

# Usage

`git clone git@github.com:JohnRodney/es6-node-boilerplate.git`

Add an alias to your particular shell profile file
`alias es6node="path/to/es6node"`

Open new terminal to refresh alias settings

`mkdir ProjectName`
`cd ProjectName`
`es6node`

Start Coding

# Result
You should now have a node_modules directory with `babel-core` and `babel-preset-es2015` already installed.
A `.babelrc` file has been generated to map these presets.
An `index.js` file has been generated as the entry point to perform the transpiling.
A 'run.js` file has been generated as the first modulization file with a hello world function. 

Test the success by typing:
`node index.js`
