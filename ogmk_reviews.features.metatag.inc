<?php

/**
 * @file
 * ogmk_reviews.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ogmk_reviews_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ogmk_review.
  $config['node:ogmk_review'] = array(
    'instance' => 'node:ogmk_review',
    'disabled' => FALSE,
    'config' => array(
      'image_src' => array(
        'value' => '[node:ogmk-node-product-ref:ogmk_images:1110]',
      ),
      'itemtype' => array(
        'value' => 'Review',
      ),
      'itemprop:image' => array(
        'value' => '[node:ogmk-node-product-ref:ogmk_images:1110]',
      ),
      'og:image' => array(
        'value' => '[node:ogmk-node-product-ref:ogmk_images:1110]',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:image' => array(
        'value' => '[node:ogmk-node-product-ref:ogmk_images:1110]',
      ),
    ),
  );

  return $config;
}
