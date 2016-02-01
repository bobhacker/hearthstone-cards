<?php
/**
 * @file
 * hs_features_model.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function hs_features_model_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-hearthstone.
  $menus['menu-hearthstone'] = array(
    'menu_name' => 'menu-hearthstone',
    'title' => 'Hearthstone',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hearthstone');

  return $menus;
}
