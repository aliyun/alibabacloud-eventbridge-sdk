<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

class QueryEventTracesResponse extends Model
{
    /**
     * @var EventTrace[]
     */
    public $eventTraceList;
    protected $_name = [
        'eventTraceList' => 'EventTraceList',
    ];

    public function validate()
    {
        Model::validateRequired('eventTraceList', $this->eventTraceList, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventTraceList) {
            $res['EventTraceList'] = [];
            if (null !== $this->eventTraceList && \is_array($this->eventTraceList)) {
                $n = 0;
                foreach ($this->eventTraceList as $item) {
                    $res['EventTraceList'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return QueryEventTracesResponse
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['EventTraceList'])) {
            if (!empty($map['EventTraceList'])) {
                $model->eventTraceList = [];
                $n                     = 0;
                foreach ($map['EventTraceList'] as $item) {
                    $model->eventTraceList[$n++] = null !== $item ? EventTrace::fromMap($item) : $item;
                }
            }
        }

        return $model;
    }
}
