<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The param of EBTargetParam.
 */
class EBTargetParam extends Model
{
    /**
     * @var string
     */
    public $resourceKey;

    /**
     * @var string
     */
    public $form;

    /**
     * @var string
     */
    public $value;

    /**
     * @var string
     */
    public $template;
    protected $_name = [
        'resourceKey' => 'ResourceKey',
        'form'        => 'Form',
        'value'       => 'Value',
        'template'    => 'Template',
    ];

    public function validate()
    {
        Model::validateRequired('resourceKey', $this->resourceKey, true);
        Model::validateRequired('form', $this->form, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->resourceKey) {
            $res['ResourceKey'] = $this->resourceKey;
        }
        if (null !== $this->form) {
            $res['Form'] = $this->form;
        }
        if (null !== $this->value) {
            $res['Value'] = $this->value;
        }
        if (null !== $this->template) {
            $res['Template'] = $this->template;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return EBTargetParam
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['ResourceKey'])) {
            $model->resourceKey = $map['ResourceKey'];
        }
        if (isset($map['Form'])) {
            $model->form = $map['Form'];
        }
        if (isset($map['Value'])) {
            $model->value = $map['Value'];
        }
        if (isset($map['Template'])) {
            $model->template = $map['Template'];
        }

        return $model;
    }
}
