// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUSHELL_H
#define _GTKMM_MENUSHELL_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: menushell.hg,v 1.9 2006/06/21 20:04:25 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gdk/gdkkeysyms.h>


#include <gtkmm/container.h>
#include <gtkmm/menu_elems.h>
#include <glibmm/helperlist.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkMenuShell GtkMenuShell;
typedef struct _GtkMenuShellClass GtkMenuShellClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class MenuShell_Class; } // namespace Gtk
namespace Gtk
{

class Menu;
class MenuShell;
class Window;

namespace Menu_Helpers
{

/*********************************************************************
***** List properties
*********************************************************************/

 
class MenuList : public Glib::HelperList< MenuItem, const Element, Glib::List_Cpp_Iterator<GtkMenuItem,MenuItem> >
{
public:
  MenuList();
  explicit MenuList(GtkMenuShell* gparent);
  MenuList(const MenuList& src);
  virtual ~MenuList() {}

  MenuList& operator=(const MenuList& src);

  typedef Glib::HelperList< MenuItem, const Element,  Glib::List_Cpp_Iterator<GtkMenuItem,MenuItem> > type_base;

  GtkMenuShell* gparent();
  const GtkMenuShell* gparent() const;

  virtual GList*& glist() const;      // front of list

  virtual void erase(iterator start, iterator stop);
  virtual iterator erase(iterator);  //Implented as custom or by LIST_CONTAINER_REMOVE
  virtual void remove(const_reference); //Implented as custom or by LIST_CONTAINER_REMOVE

  /// This is order n. (use at own risk)
  reference operator[](size_type l) const;

public:
  iterator insert(iterator position, element_type& e); //custom-implemented.

  template <class InputIterator>
  inline void insert(iterator position, InputIterator first, InputIterator last)
  {
    for(;first != last; ++first)
      position = insert(position, *first);
  }

 inline void push_front(element_type& e)
    { insert(begin(), e); }
  inline void push_back(element_type& e)
    { insert(end(), e); }


  virtual void remove(Widget& widget); //custom
  };


} // namespace Menu_Helpers


/** The abstract base class for Gtk::Menu and Gtk::MenuBar.
 * It is a container of Gtk::MenuItem objects arranged in a list which can be navigated, selected, and activated by the user to perform application functions.
 * It can have a submenu associated with it, allowing for nested hierarchical menus.
 * You can use append(), prepend() and insert() to add Gtk::MenuItem widgets,
 * but you will probably find it more convenient to use the STL-style items() interface with the Gtk::Menu_Helpers::MenuElem() class.
 * @ingroup Widgets
 * @ingroup Containers
 * @ingroup Menus
 */

class MenuShell : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef MenuShell CppObjectType;
  typedef MenuShell_Class CppClassType;
  typedef GtkMenuShell BaseObjectType;
  typedef GtkMenuShellClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~MenuShell();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class MenuShell_Class;
  static CppClassType menushell_class_;

  // noncopyable
  MenuShell(const MenuShell&);
  MenuShell& operator=(const MenuShell&);

protected:
  explicit MenuShell(const Glib::ConstructParams& construct_params);
  explicit MenuShell(GtkMenuShell* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkMenuShell*       gobj()       { return reinterpret_cast<GtkMenuShell*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkMenuShell* gobj() const { return reinterpret_cast<GtkMenuShell*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_deactivate().
  virtual void on_deactivate();
  /// This is a default handler for the signal signal_selection_done().
  virtual void on_selection_done();


private:


public:
  

  typedef Menu_Helpers::MenuList MenuList;
  friend class Menu_Helpers::MenuList;

  
  void append(MenuItem& menu_item);
  
  void prepend(MenuItem& menu_item);
  
  void insert(MenuItem& menu_item, int position);

  
  void select_item(MenuItem& menu_item);
  
  void deselect();

  //TODO: Is force_deactivate = false a good default?
  
  void activate_item(MenuItem& menu_item, bool force_deactivate =  false);
  
  /** Select the first visible or selectable child of the menu shell;
   * don't select tearoff items unless the only item is a tearoff
   * item.
   * 
   * @param search_sensitive If <tt>true</tt>, search for the first selectable
   * menu item, otherwise select nothing if
   * the first item isn't sensitive. This
   * should be <tt>false</tt> if the menu is being
   * popped up initially.
   */
  void select_first(bool search_sensitive =  true);
  
  void deactivate();
  
  /** Cancels the selection within the menu shell.  
   */
  void cancel();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%deactivate()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_deactivate();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%selection_done()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_selection_done();

  
  /**
   * @par Slot Prototype:
   * <tt>gboolean on_my_%move_selected(int distance)</tt>
   *
   */

  Glib::SignalProxy1< gboolean,int > signal_move_selected();


  //Keybinding signals:
  
  
  MenuList& items();
  const MenuList& items() const;

  /**
   * Initializes menu accelerators.
   * This method initializes the menu accelerators. Therefore an
   * AccelGroup object is needed which is stored in each Window object
   * in the Gtkmm library implementation.
   *
   * When using MenuBar and OptionMenu objects this method is called
   * automatically when the menus are realized. Because most likely the
   * MenuBar and OptionMenu is attached to a window at this time and
   * the window object can be found automatically.
   *
   * Important note when using popup menus:
   * If you are using accelerated menu entries inside a popup
   * menu you have to call the accelerate() method manually. This is
   * because the popup menu is not connected to any window and the
   * accelerators should be initialized even before the popup menu is
   * shown. The right place to call the accelerate() method is right
   * after the popup menu has been build.
   *
   * @param window Window where the menu is shown. Inside this window
   *   the AccelGroup object is stored that will be used to initialize
   *   the accelerators.
   */
  void accelerate(Window& window);

  /**
   * Initializes menu accelerators.
   * Does the same as the accelerate(Window& window) method. But you can
   * use any parent widget where the menu is used. This method then gets
   * the toplevel window using Widget::get_toplevel() and uses this
   * window for registering the menu accelerators.
   *
   * @param parent Parent widget used as starting point for searching
   *   the toplevel window.
   */
  void accelerate(Widget& parent);

  
  /** Returns <tt>true</tt> if the menu shell will take the keyboard focus on popup.
   * 
   * @return <tt>true</tt> if the menu shell will take the keyboard focus on popup.
   */
  bool get_take_focus() const;
  
  /** If @a take_focus is <tt>true</tt> (the default) the menu shell will take the keyboard 
   * focus so that it will receive all keyboard events which is needed to enable
   * keyboard navigation in menus.
   * 
   * Setting @a take_focus to <tt>false</tt> is useful only for special applications
   * like virtual keyboard implementations which should not take keyboard
   * focus.
   * 
   * The @a take_focus state of a menu or menu bar is automatically propagated
   * to submenus whenever a submenu is popped up, so you don't have to worry
   * about recursively setting it for your entire menu hierarchy. Only when
   * programmatically picking a submenu and popping it up manually, the
   *  @a take_focus property of the submenu needs to be set explicitely.
   * 
   * Note that setting it to <tt>false</tt> has side-effects:
   * 
   * If the focus is in some other app, it keeps the focus and keynav in
   * the menu doesn't work. Consequently, keynav on the menu will only
   * work if the focus is on some toplevel owned by the onscreen keyboard.
   * 
   * To avoid confusing the user, menus with @a take_focus set to <tt>false</tt>
   * should not display mnemonics or accelerators, since it cannot be
   * guaranteed that they will work.
   * 
   * See also gdk_keyboard_grab()
   * 
   * @param take_focus <tt>true</tt> if the menu shell should take the keyboard focus on popup.
   */
  void set_take_focus(bool take_focus =  true);

  /** A boolean that determines whether the menu grabs the keyboard focus.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_take_focus() ;

/** A boolean that determines whether the menu grabs the keyboard focus.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_take_focus() const;


protected:
  MenuShell();
  

private:


  MenuList      items_proxy_;
  Gtk::Window*  accel_window_;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::MenuShell
   */
  Gtk::MenuShell* wrap(GtkMenuShell* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_MENUSHELL_H */

