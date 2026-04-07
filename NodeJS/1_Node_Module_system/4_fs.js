// files

const fs = require('fs')


// Reading a File

// let fileContent = fs.readFileSync('f2.txt')

// console.log('Data from F1 file ->' + fileContent);


// Writing in a File

// fs.writeFileSync('f3.txt',"My name is Praveen Desai from Vijayapura.")

// console.log("File has been Writtten.");


// Appending in the file

// fs.appendFileSync('f2.txt',"As my data being updated?")
// console.log("Your Recent Data is appended.");


// Deleting a file
// fs.unlinkSync('f3.txt')




// Directory Section


// Creating the Directory.

// fs.mkdirSync('iron_man')



//  Checking the content of directory

let folderpath = 'C:\\Users\\desai\\OneDrive\\Desktop\\Programming Languages\\Scaler_Node.js\\1_Node_Module_system\\iron_man'

let folderContent = fs.readdirSync(folderpath)
// console.log("Folder Content: ", folderContent);


// Check wheather the directory exist?

// let result = fs.existsSync('1_cp.js')
// console.log("Does it exist? ", result);


// Delete the Directory 

fs.rmdirSync('iron_man')