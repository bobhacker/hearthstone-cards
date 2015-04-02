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
    'name' => 'width_100px',
    'label' => 'width_100px',
    'effects' => array(
      1 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
