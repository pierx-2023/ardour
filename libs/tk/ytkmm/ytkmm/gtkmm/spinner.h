// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_SPINNER_H
#define _GTKMM_SPINNER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* spinner.h
 *
 * Copyright (C) 2009 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtkmm/drawingarea.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSpinner GtkSpinner;
typedef struct _GtkSpinnerClass GtkSpinnerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Spinner_Class; } // namespace Gtk
namespace Gtk
{


/** A widget that displays a spinner animation.
 *
 * @ingroup Widgets
 */

class Spinner : public DrawingArea
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Spinner CppObjectType;
  typedef Spinner_Class CppClassType;
  typedef GtkSpinner BaseObjectType;
  typedef GtkSpinnerClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Spinner();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Spinner_Class;
  static CppClassType spinner_class_;

  // noncopyable
  Spinner(const Spinner&);
  Spinner& operator=(const Spinner&);

protected:
  explicit Spinner(const Glib::ConstructParams& construct_params);
  explicit Spinner(GtkSpinner* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSpinner*       gobj()       { return reinterpret_cast<GtkSpinner*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSpinner* gobj() const { return reinterpret_cast<GtkSpinner*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  Spinner();

  
  /** Starts the animation of the spinner.
   */
  void start();
  
  /** Stops the animation of the spinner.
   */
  void stop();

  /** Whether the spinner is active.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_active() ;

/** Whether the spinner is active.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_active() const;


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Spinner
   */
  Gtk::Spinner* wrap(GtkSpinner* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SPINNER_H */

