<?php

class FedoraObjectEntity extends Entity {

  protected $entityType = 'fedora_object';

  public function __construct(array $values = array(), $entityType = NULL) {
    parent::__construct($values, $entityType);
  }
}