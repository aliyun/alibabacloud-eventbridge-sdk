<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

class QueryEventByEventIdResponse extends Model
{
    /**
     * @var EventTrace[]
     */
    public $tracedEvents;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $total;
    protected $_name = [
        'tracedEvents' => 'TracedEvents',
        'nextToken'    => 'NextToken',
        'total'        => 'Total',
    ];

    public function validate()
    {
        Model::validateRequired('tracedEvents', $this->tracedEvents, true);
        Model::validateRequired('nextToken', $this->nextToken, true);
        Model::validateRequired('total', $this->total, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->tracedEvents) {
            $res['TracedEvents'] = [];
            if (null !== $this->tracedEvents && \is_array($this->tracedEvents)) {
                $n = 0;
                foreach ($this->tracedEvents as $item) {
                    $res['TracedEvents'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }
        if (null !== $this->total) {
            $res['Total'] = $this->total;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return QueryEventByEventIdResponse
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['TracedEvents'])) {
            if (!empty($map['TracedEvents'])) {
                $model->tracedEvents = [];
                $n                   = 0;
                foreach ($map['TracedEvents'] as $item) {
                    $model->tracedEvents[$n++] = null !== $item ? EventTrace::fromMap($item) : $item;
                }
            }
        }
        if (isset($map['NextToken'])) {
            $model->nextToken = $map['NextToken'];
        }
        if (isset($map['Total'])) {
            $model->total = $map['Total'];
        }

        return $model;
    }
}
