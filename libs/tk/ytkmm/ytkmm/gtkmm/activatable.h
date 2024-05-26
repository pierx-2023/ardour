// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_ACTIVATABLE_H
#define _GTKMM_ACTIVATABLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: activatable.hg,v 1.3 2006/05/18 17:53:15 murrayc Exp $ */

/* Copyright (C) 2009 The gtkmm Development Team
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

#include <gtkmm/action.h>
#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkActivatableIface GtkActivatableIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkActivatable GtkActivatable;
typedef struct _GtkActivatableClass GtkActivatableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Activatable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

//TODO: Use this when we can add new base classes to existing classes.
/** Activatable widgets can be connected to a Gtk::Action and reflect the state 
 * of the action. An Activatable can also provide feedback through its action, 
 * as it is responsible for activating the related action.
 */

class Activatable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Activatable CppObjectType;
  typedef Activatable_Class CppClassType;
  typedef GtkActivatable BaseObjectType;
  typedef GtkActivatableIface BaseClassType;

private:
  friend class Activatable_Class;
  static CppClassType activatable_class_;

  // noncopyable
  Activatable(const Activatable&);
  Activatable& operator=(const Activatable&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Activatable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Activatable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Activatable(GtkActivatable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Activatable();

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkActivatable*       gobj()       { return reinterpret_cast<GtkActivatable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkActivatable* gobj() const { return reinterpret_cast<GtkActivatable*>(gobject_); }

private:


public:
  
  /** This is a utility function for Gtk::Activatable implementors.
   * 
   * When implementing Gtk::Activatable you must call this when
   * handling changes of the Gtk::Activatable::property_related_action(), and
   * you must also use this to break references in Object->dispose().
   * 
   * This function adds a reference to the currently set related
   * action for you, it also makes sure the Gtk::Activatable->update()
   * method is called when the related Gtk::Action properties change
   * and registers to the action's proxy list.
   * 
   * <note>Be careful to call this before setting the local
   * copy of the Gtk::Action property, since this function uses 
   * gtk_activatable_get_action() to retrieve the previous action</note>
   * 
   * @param action The Gtk::Action to set.
   */
  void do_set_related_action(const Glib::RefPtr<Action>& action);
  
  /** Gets the related Gtk::Action for @a activatable.
   * 
   * @return The related Gtk::Action if one is set.
   */
  Glib::RefPtr<Action> get_related_action();
  
  /** Gets the related Gtk::Action for @a activatable.
   * 
   * @return The related Gtk::Action if one is set.
   */
  Glib::RefPtr<const Action> get_related_action() const;
  
  /** Gets whether this activatable should reset its layout
   * and appearance when setting the related action or when
   * the action changes appearance.
   * 
   * @return Whether @a activatable uses its actions appearance.
   */
  bool get_use_action_appearance() const;
  
  /** This is called to update the activatable completely, this is called
   * internally when the Gtk::Activatable::property_related_action() property is set
   * or unset and by the implementing class when
   * Gtk::Activatable::signal_use_action_appearance() changes.
   * 
   * @param action The related Gtk::Action or <tt>0</tt>.
   */
  void sync_action_properties(const Glib::RefPtr<Action>& action);
  
  /** Sets the related action on the @a activatable object.
   * 
   * <note>Gtk::Activatable implementors need to handle the Gtk::Activatable::property_related_action()
   * property and call do_set_related_action() when it changes.</note>
   * 
   * @param action The Gtk::Action to set.
   */
  void set_related_action(const Glib::RefPtr<Action>& action);
  
  /** Sets whether this activatable should reset its layout and appearance
   * when setting the related action or when the action changes appearance
   * 
   * <note>Gtk::Activatable implementors need to handle the
   * Gtk::Activatable::property_use_action_appearance() property and call
   * sync_action_properties() to update @a activatable
   * if needed.</note>
   * 
   * @param use_appearance Whether to use the actions appearance.
   */
  void set_use_action_appearance(bool use_appearance =  true);

  /** The action this activatable will activate and receive updates from.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Action> > property_related_action() ;

/** The action this activatable will activate and receive updates from.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Action> > property_related_action() const;

  /** Whether to use the related actions appearance properties.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_action_appearance() ;

/** Whether to use the related actions appearance properties.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_action_appearance() const;


    virtual void update_vfunc(const Glib::RefPtr<Action>& action, const Glib::ustring& property_name);

    virtual void sync_action_properties_vfunc(const Glib::RefPtr<Action>& action);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


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
   * @relates Gtk::Activatable
   */
  Glib::RefPtr<Gtk::Activatable> wrap(GtkActivatable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_ACTIVATABLE_H */

