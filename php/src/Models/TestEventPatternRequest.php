<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of testEventPattern.
 */
class TestEventPatternRequest extends Model
{
    /**
     * @var string
     */
    public $event;

    /**
     * @var string
     */
    public $eventPattern;
    protected $_name = [
        'event'        => 'Event',
        'eventPattern' => 'EventPattern',
    ];

    public function validate()
    {
        Model::validateRequired('event', $this->event, true);
        Model::validateRequired('eventPattern', $this->eventPattern, true);
        Model::validateMaxLength('event', $this->event, 2048);
        Model::validateMaxLength('eventPattern', $this->eventPattern, 2048);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->event) {
            $res['Event'] = $this->event;
        }
        if (null !== $this->eventPattern) {
            $res['EventPattern'] = $this->eventPattern;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return TestEventPatternRequest
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['Event'])) {
            $model->event = $map['Event'];
        }
        if (isset($map['EventPattern'])) {
            $model->eventPattern = $map['EventPattern'];
        }

        return $model;
    }
}
