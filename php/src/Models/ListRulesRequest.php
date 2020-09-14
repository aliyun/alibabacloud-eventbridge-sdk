<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of search EventBus.
 */
class ListRulesRequest extends Model
{
    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $ruleNamePrefix;

    /**
     * @var int
     */
    public $limit;

    /**
     * @var string
     */
    public $nextToken;
    protected $_name = [
        'eventBusName'   => 'EventBusName',
        'ruleNamePrefix' => 'RuleNamePrefix',
        'limit'          => 'Limit',
        'nextToken'      => 'NextToken',
    ];

    public function validate()
    {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->ruleNamePrefix) {
            $res['RuleNamePrefix'] = $this->ruleNamePrefix;
        }
        if (null !== $this->limit) {
            $res['Limit'] = $this->limit;
        }
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return ListRulesRequest
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }
        if (isset($map['RuleNamePrefix'])) {
            $model->ruleNamePrefix = $map['RuleNamePrefix'];
        }
        if (isset($map['Limit'])) {
            $model->limit = $map['Limit'];
        }
        if (isset($map['NextToken'])) {
            $model->nextToken = $map['NextToken'];
        }

        return $model;
    }
}
