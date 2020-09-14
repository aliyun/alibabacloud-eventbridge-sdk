<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of EventBuses rule.
 */
class EventRuleDTO extends Model
{
    /**
     * @var string
     */
    public $ruleARN;

    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $ruleName;

    /**
     * @var string
     */
    public $description;

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

    /**
     * @var int
     */
    public $ctime;

    /**
     * @var int
     */
    public $mtime;
    protected $_name = [
        'ruleARN'       => 'RuleARN',
        'eventBusName'  => 'EventBusName',
        'ruleName'      => 'RuleName',
        'description'   => 'Description',
        'status'        => 'Status',
        'filterPattern' => 'FilterPattern',
        'targets'       => 'Targets',
        'ctime'         => 'Ctime',
        'mtime'         => 'Mtime',
    ];

    public function validate()
    {
        Model::validateRequired('ruleARN', $this->ruleARN, true);
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('ruleName', $this->ruleName, true);
        Model::validateRequired('description', $this->description, true);
        Model::validateRequired('status', $this->status, true);
        Model::validateRequired('filterPattern', $this->filterPattern, true);
        Model::validateRequired('targets', $this->targets, true);
        Model::validateRequired('ctime', $this->ctime, true);
        Model::validateRequired('mtime', $this->mtime, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->ruleARN) {
            $res['RuleARN'] = $this->ruleARN;
        }
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->ruleName) {
            $res['RuleName'] = $this->ruleName;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
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
        if (null !== $this->ctime) {
            $res['Ctime'] = $this->ctime;
        }
        if (null !== $this->mtime) {
            $res['Mtime'] = $this->mtime;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return EventRuleDTO
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['RuleARN'])) {
            $model->ruleARN = $map['RuleARN'];
        }
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }
        if (isset($map['RuleName'])) {
            $model->ruleName = $map['RuleName'];
        }
        if (isset($map['Description'])) {
            $model->description = $map['Description'];
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
        if (isset($map['Ctime'])) {
            $model->ctime = $map['Ctime'];
        }
        if (isset($map['Mtime'])) {
            $model->mtime = $map['Mtime'];
        }

        return $model;
    }
}
