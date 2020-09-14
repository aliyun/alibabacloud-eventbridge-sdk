<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of create an EventBus rule on Aliyun.
 */
class CreateRuleRequest extends Model
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
     * @var string
     */
    public $ruleName;

    /**
     * @var string
     */
    public $status;

    /**
     * @var string
     */
    public $filterPattern;

    /**
     * @var TargetEntry[]
     */
    public $targets;
    protected $_name = [
        'eventBusName'  => 'EventBusName',
        'description'   => 'Description',
        'ruleName'      => 'RuleName',
        'status'        => 'Status',
        'filterPattern' => 'FilterPattern',
        'targets'       => 'Targets',
    ];

    public function validate()
    {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('ruleName', $this->ruleName, true);
        Model::validateRequired('targets', $this->targets, true);
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
        if (null !== $this->ruleName) {
            $res['RuleName'] = $this->ruleName;
        }
        if (null !== $this->status) {
            $res['Status'] = $this->status;
        }
        if (null !== $this->filterPattern) {
            $res['FilterPattern'] = $this->filterPattern;
        }
        if (null !== $this->targets) {
            $res['Targets'] = [];
            if (null !== $this->targets && \is_array($this->targets)) {
                $n = 0;
                foreach ($this->targets as $item) {
                    $res['Targets'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return CreateRuleRequest
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
        if (isset($map['RuleName'])) {
            $model->ruleName = $map['RuleName'];
        }
        if (isset($map['Status'])) {
            $model->status = $map['Status'];
        }
        if (isset($map['FilterPattern'])) {
            $model->filterPattern = $map['FilterPattern'];
        }
        if (isset($map['Targets'])) {
            if (!empty($map['Targets'])) {
                $model->targets = [];
                $n              = 0;
                foreach ($map['Targets'] as $item) {
                    $model->targets[$n++] = null !== $item ? TargetEntry::fromMap($item) : $item;
                }
            }
        }

        return $model;
    }
}
