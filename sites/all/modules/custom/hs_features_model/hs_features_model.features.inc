<?php
/**
 * @file
 * hs_features_model.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function hs_features_model_image_default_styles() {
  $styles = array();

  // Exported image style: width_100px.
  $styles['width_100px'] = array(
    'label' => 'width_100px',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hs_features_model_node_info() {
  $items = array(
    'carte' => array(
      'name' => t('Carte'),
      'base' => 'node_content',
      'description' => t('Carte Hearthstone (héro, sort, serviteur, etc.)'),
      'has_title' => '1',
      'title_label' => t('nom'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
