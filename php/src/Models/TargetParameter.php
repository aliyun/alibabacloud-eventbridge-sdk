<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The config of TargetParameter
 */
class TargetParameter extends Model {
    protected $_name = [
        'value' => 'Value',
        'form' => 'Form',
        'template' => 'Template',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->value) {
            $res['Value'] = $this->value;
        }
        if (null !== $this->form) {
            $res['Form'] = $this->form;
        }
        if (null !== $this->template) {
            $res['Template'] = $this->template;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return TargetParameter
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Value'])){
            $model->value = $map['Value'];
        }
        if(isset($map['Form'])){
            $model->form = $map['Form'];
        }
        if(isset($map['Template'])){
            $model->template = $map['Template'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $value;

    /**
     * @var string
     */
    public $form;

    /**
     * @var string
     */
    public $template;

}
