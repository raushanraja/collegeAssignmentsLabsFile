# Bootstrap

### Bootstrap:

- Bootstrap is most popular front-end framework for developing responsive and mobile-first websites.
- It includes HTML and CSS based design templates and JavaScript plugins to develop a website easily and quickly.

#### Features of Bootstrap

- **Easy to use**: Anybody with just basic knowledge of HTML and CSS can start using Bootstrap.
- **Responsive features**: Bootstrap's responsive CSS adjusts to phones, tablets, and desktops.
- **Mobile-first approach**: In Bootstrap, mobile-first styles are part of the core framework.
- **Browser compatibility**: Bootstrap 4 is compatible with all modern browsers (Chrome, Firefox, Internet Explorer 10+, Edge, Safari, and Opera)
- **Open Source** : Bootstrap is an open source framework which allows everyone to use it without paying any money.
- **Fater Loading Time** : Many users already have downloaded Bootstrap from MaxCDN when visiting another site. As a result, it will be loaded from cache when they visit your site, which leads to faster loading time.


<P style="page-break-before: always">

#### Navbar

- Bootstrap navbar is used to add a responsive navigation header at the top of the page.
- The navbar includes support for branding, navigation, collapse plugin and more.
- A standard navigation bar is created with the .navbar class, followed by a responsive collapsing class: .navbar-expand-xl or lg or md or sm
- To add links inside the navbar, use a **ul** element with class="navbar-nav". Then add **li** elements with a .nav-item class followed by an **a** element with a .nav-link class.
- Supported Sub-Components:
  - **.navbar-brand** for your company, product, or project name.
  - **.navbar-nav** for a full-height and lightweight navigation (including support for dropdowns).
  - **.navbar-toggler** for use with our collapse plugin and other navigation toggling behaviors.
  - **.form-inline** for any form controls and actions.
  - **.navbar-text** for adding vertically centered strings of text.
  - **.collapse .navbar-collapse** for grouping and hiding navbar contents by a parent breakpoint.

```html
<nav class="navbar navbar-expand-sm bg-light navbar-light">
  <a class="navbar-brand" href="#">
    <img src="bird.jpg" alt="Logo" style="width:40px;" />
  </a>
  <ul class="navbar-nav">
    <li class="nav-item active">
      <a class="nav-link" href="#">Active</a>
    </li>
    <li class="nav-item">
      <a class="nav-link" href="#">Link</a>
    </li>
    <li class="nav-item">
      <a class="nav-link" href="#">Link</a>
    </li>
  </ul>
</nav>
```

<P style="page-break-before: always">

#### Button Group

- Button Group is used to create a series of buttons together on a single line either vertically or horizontally.
- A series of buttons with .btn in .btn-group are wrapped together to create a group of buttons.
- Classes to define button groups are:
  - **.btn-group** : Create a button group
  - **.btn-group-_ (_=md|lg|)** : Create a button group with size
  - **.btn-group-vertical** : Create a vertical button group

```html
<div class="btn-group" role="group" aria-label="Basic example">
  <button type="button" class="btn btn-secondary">Left</button>
  <button type="button" class="btn btn-secondary">Middle</button>
  <button type="button" class="btn btn-secondary">Right</button>
</div>
```

#### Media Objects:

- Media objects in bootstrap is used to align media objects (like images or videos) together with content.
- These are often used to display blog comments, tweets, likes and so on.
- To nest media objects, place a new **.media** container inside the **.media-body** container.

```html
<div class="media">
  <img src="..." class="mr-3" alt="..." />
  <div class="media-body">
    <h5 class="mt-0">Media heading</h5>
    Media texts realted to media heading. Please Help!
  </div>
</div>
```

<P style="page-break-before: always">

#### Cards

- A card in Bootstrap 4 is a bordered box with some padding around its content. It includes options for headers, footers, content, colors, etc.
- A basic card is created with the **.card** class, and content inside the card has a **.card-body**.
  - **.card-header**: Adds a heading to the card and
  - **.card-footer**: Adds a footer to the card.
  - **.card-title**: Add card titles to any heading element.
  - **.card-text** to add card titles to any heading element.
  - **.card-img-top or .card-img-bottom**: Place image at top or bottom.
  - **.card-columns**: Creates a masonry-like grid of cards.
  - **.card-deck**: Creates a grid of cards that are of equal height and width.
  - **.card-group**: Similar to .card-deck, difference is that it removes left and right margins between each card.
  - **Contextual classes**: .bg-primary, .bg-success, .bg-info, .bg-warning, .bg-danger, .bg-secondary, .bg-dark and .bg-light.

```html
<div class="card" style="width:400px">
  <img class="card-img-top" src="img_avatar1.png" alt="Card image" />
  <div class="card-body">
    <h4 class="card-title">John Doe</h4>
    <p class="card-text">Some example text.</p>
    <a href="#" class="btn btn-primary">See Profile</a>
  </div>
</div>
```


<P style="page-break-before: always">

#### Forms
+ Froms in bootstrap are used to create a more precise layout which groups  html form inputs into one.
+ Form controls automatically receive some global styling with Bootstrap.
+ **.form-group** is used to wrap each form control, to ensure proper margins.
+ **.from-control** is used to wrap individual from input elements.
+ Bootstrap provides two types of form layouts:
  + Stacked (full-width) form by default
  + Inline form, Add **.form-inline** to the form element

+ **.form-row**, **row**, **col**: Used to control width and alignment of form inputs.
+ **.was-validated**,**.needs-validation**, **.valid-feedback**, **.valid-feedback**: Used for from validation.


```html
<form>
  <div class="form-group">
    <label for="emailadd">Email address</label>
    <input type="email" class="form-control" id="emailadd">
  </div>
  <div class="form-group">
    <label for="upassword">Password</label>
    <input type="password" class="form-control" id="upassword">
  </div>
  <button type="submit" class="btn btn-primary">Submit</button>
</form>
```

#### Layout in Bootstrap
+ **Containers** are the most basic layout element in Bootstrap
+ It is **required** when using the default grid system.
+ Used to contain, pad, and (sometimes) center the content within them.
+ Bootstrap comes with three different containers:
  -  **.container**, which sets a max-width at each responsive breakpoint
  -  **.container-fluid**, which is width: 100% at all breakpoints
  -  **.container-{breakpoint}**, which is width: 100% until the specified breakpoint
  - **breakpoints ca be**: sm , md, lg, xl or fluid
+ Inside contained the **grid** system is used to specify the placing of each html element.

#### Bootstrap Grid
+ Bootstrap grid usages css flexbox to build layout of all shapes and sizes
+ The grid system allows up to 12 columns across the page.
+ The columns can be nested to create a specific layout.
+ **container** are wrapper for **rows**
+ **rows** are wrapper for **cols-**
+ Each grid system is wrapped inside a **container** wrapper, whose direct child have **.row** class to specifiy that it will contain elements that describes how the columns are partitioned and has **.col** class.
+ The Bootstrap 4 grid system has five classes:
    + .**col-** : extra small devices
    + **.col-sm-** : small devices 
    + **.col-md-** : medium devices 
    + **.col-lg-** : large devices 
    + **.col-xl-** : xlarge devices 

```html
<div class="container">
  <div class="row">
    <div class="col">
      1 of 2
    </div>
    <div class="col">
      2 of 2
    </div>
  </div>
  <div class="row">
    <div class="col">
      1 of 3
    </div>
    <div class="col">
      2 of 3
    </div>
    <div class="col">
      3 of 3
    </div>
  </div>
</div>
```
<P style="page-break-before: always">

#### Contextual Panel Classes
+ Contextual panel classes in bootstrap 3 are used "meaning through colors" to the panels.
+ To color the panel, following contextual classes are used: 
  + .panel-default
  + .panel-primary
  + .panel-success
  + .panel-info
  + .panel-warning
  + .panel-danger


#### Bootstrap Collapsing elements
+ Bootstrap Collapsing are used when there is need of   hiding the large content and to show when a user wants it to be shown.
+ The **.collapse** class with an **id** attribute indicates a collapsible element.
+ To control (show/hide) the collapsible content the following attributes are added to an **a** or a **button** element:
  + **data-toggle="collapse"**
  + **data-target="#id"** 
+ The **id** should be same for button as well as collapsible element
```html
<button type="button" class="btn btn-primary" data-toggle="collapse" 
data-target="#demo">Simple collapsible</button>
  <div id="demo" class="collapse">
   Large amount of data to be shown after clicking the button
  </div>
  ```

<P style="page-break-before: always">

#### List Group
+ List groups are used to create flexible and powerful component for displaying a series of content.
+ It can be used to support any content within but are generally used with **list** or **button**.
+ To create a basic list group, wrapper element has class **.list-group**, and the elements within has class **.list-group-item**.
+ Other Classes that can be used are:
  + **.active**: To highlight the current item.
  + **.list-group-item-action**: To add a grey background color on hover.
  + **.disabled**: To adds a lighter text color to the disabled item.
  + **.list-group-flush**: To remove some borders and rounded corners
  + **.list-group-horizontal**: To display horizontally instead of vertically
  + Contextual classes to add color: **list-group-item-{color}**, e.g: **.list-group-item-success**
```html
 <ul class="list-group">
  <li class="list-group-item">First item</li>
  <li class="list-group-item">Second item</li>
  <li class="list-group-item">Third item</li>
</ul> 
```