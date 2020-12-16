<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of create EventBus.
 */
class CreateEventBusRequest extends Model
{
    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $description;

    /**
     * @var string[]
     */
    public $tags;
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'description'  => 'Description',
        'tags'         => 'Tags',
    ];

    public function validate()
    {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateMaxLength('eventBusName', $this->eventBusName, 127);
        Model::validateMinLength('eventBusName', $this->eventBusName, 1);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->tags) {
            $res['Tags'] = $this->tags;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return CreateEventBusRequest
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }
        if (isset($map['Description'])) {
            $model->description = $map['Description'];
        }
        if (isset($map['Tags'])) {
            $model->tags = $map['Tags'];
        }

        return $model;
    }
}
