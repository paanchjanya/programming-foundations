const express = require('express')

const app = express()

// Methods - PUT, GET, POST, DELETE


app.use(express.json())

let courses = [
    {id : 1, name : "Python"},
    {id : 2, name : "JavaScript"},
    {id : 3, name : "C++"},
]

app.get('/',(req,res)=>{
    res.send('Hello from Desai Nivas.')
}) // Read
app.get('/about',(req,res)=>{
    res.send('Hello from Desai Nivas to about page.')
})
app.get('/contact',(req,res)=>{
    res.send('To Contact Desai Nivas call 7259982140.')
})

app.get('/courses', (req,res)=>{
    res.send(courses)
})

app.post('/courses', (req, res)=>{
    let course = {
        id : courses.length + 1,
        name : req.body.name
    }
    courses.push(course)
    res.send(course)
})// Create


// PUT Method - [Does the Update the existing resource]
app.put('/courses/:name', (req, res)=>{
    let course = courses.find((c)=> c.name === req.params.name)
    
    if(!course) res.status(404).send('Course not found')
        course.name = req.body.name
        res.send(course)
})



// Route Parameters

app.get('/courses/:name', (req,res)=>{
    let course = courses.find((c)=> c.name === req.params.name)
    
    if(!course) res.status(404).send('Course not found')
        res.send(course)
})


// DELETE
// app.delete('/courses/:name', (req, res)=>{
//         let updatecourse = courses.filter(c => c.name !== req.params.name)

//         courses = updatecourse

//         res.send(updatecourse)
// })
app.delete('/courses/:id', (req, res)=>{
    let course = courses.find((c)=> c.id === parseInt(req.params.id))
        if(!course) res.status(404).send('Course not found')
        res.send(course)

        const index = courses.indexOf(course)

        courses.splice(index, 1)

        res.send(course)
})






const port = process.env.PORT || 3000


app.listen(port, ()=> console.log(`Port is running on ${port}`))
