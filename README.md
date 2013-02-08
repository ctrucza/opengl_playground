opengl_playground
=================

Motivation
----------

I tried my hands on OpenGL several times in the last 10 years. I inevitably got bogged down in all the gory details before successfully showing a multicolored triangle.

This is just another stab at it.

What's different now? Not much really,  just that I read a different book now: [Interactive Computer Graphics: A Top-Down Approach with Shader-Based OpenGL (6th Edition)](http://www.amazon.com/Interactive-Computer-Graphics-Top-Down-Shader-Based/dp/0132545233).

The coolest thing about this book is that it starts with retained mode drawing (meaning prepare your vertices, push it to the graphics card, set up your vertex and fragment shaders and on display() just glDrawArrays). Surely it's more work in the beginning, but somehow the code looks nicer: you have a separate place to build your drawing, a separate place to link the drawing up with OpenGL and a trivial display() loop.