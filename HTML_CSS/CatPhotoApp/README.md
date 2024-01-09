# CatPhotoApp

This project is based on [freeCodeCamp.org's](https://www.freeCodeCamp.org")
Responsive Web Design course.

## Nuggets learned

### Commenting

Comments in HTML are written with `<!-- -->`. This allows you to leave messages without affecting the browser display

### Generals

- Using the HTML's `main` element makes it easier to read and helps with Search Engine Optimization.
  - `<main>` and `</main>`
- Images are added with the `img` element.
  - It is a *self-closing* tag
  - The `src` attribute is used to locate the where image is stored
    - The browser looks at this attribute to fine the source location of the image.
  - The `alt` attribute is used to give information about the image
    - It is also useful in screen readers (accessibility)
    - It is displayed when the image fail to load.
    - It's useful when clearly explained or written.
- Links to different parts of the webpage or website can be added with the anchor (`a`) element
  - The `href` attribute is where the URL is entered.
  - The `target` attribute determines how the link will be opened when it is clicked.
    - A common example is to open links in a new tab, this is achieved with the `_blank` value.
      - `<a href="https://www.example.com" target="_blank">example.com</a>`
  - It can be wrapped around most elements
- Use the `section` element to separate different contents from one another.
- The `figure` element represents self-contained content and will allow you to associate an image with a caption.
  - The `figcaption` element is used to add a caption to describe the image in a `figure` element
- The `action` attribute of the `form` element decides where the form is submitted when the submit button is pressed.
- Submit buttons can be created using either the `input` element or the `button element`
  - Using the `input` element: `<input type="Submit">`
  - Using the `button` element: `<button type="submit">Submit</button>`
- The `required` keyword used in the `input` element ensures that a field is filled before the form can be submitted.
- `label` elements are used to associate the text for an `input` element

  ```html
  <!-- Add an input and a label -->
  <input type="checkbox" name="yes-no" id="yes" value="yes">
  <label for="yes">Yes</label>
  ```

  - Useful in assistive technologies like screen readers.
- The `id` attribute is used to identify specific HTML elements.
  - They must be unique from all other `id` values for the entire page.
- `input` elements need a `name` and `value` attributes.
  - This is needed to make better decisions at the server-side when the form is submitted.
