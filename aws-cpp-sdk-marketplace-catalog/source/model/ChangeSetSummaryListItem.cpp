﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/marketplace-catalog/model/ChangeSetSummaryListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

ChangeSetSummaryListItem::ChangeSetSummaryListItem() : 
    m_changeSetIdHasBeenSet(false),
    m_changeSetArnHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_entityIdListHasBeenSet(false)
{
}

ChangeSetSummaryListItem::ChangeSetSummaryListItem(JsonView jsonValue) : 
    m_changeSetIdHasBeenSet(false),
    m_changeSetArnHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_status(ChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_entityIdListHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeSetSummaryListItem& ChangeSetSummaryListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeSetId"))
  {
    m_changeSetId = jsonValue.GetString("ChangeSetId");

    m_changeSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeSetArn"))
  {
    m_changeSetArn = jsonValue.GetString("ChangeSetArn");

    m_changeSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeSetName"))
  {
    m_changeSetName = jsonValue.GetString("ChangeSetName");

    m_changeSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeStatusMapper::GetChangeStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityIdList"))
  {
    Array<JsonView> entityIdListJsonList = jsonValue.GetArray("EntityIdList");
    for(unsigned entityIdListIndex = 0; entityIdListIndex < entityIdListJsonList.GetLength(); ++entityIdListIndex)
    {
      m_entityIdList.push_back(entityIdListJsonList[entityIdListIndex].AsString());
    }
    m_entityIdListHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeSetSummaryListItem::Jsonize() const
{
  JsonValue payload;

  if(m_changeSetIdHasBeenSet)
  {
   payload.WithString("ChangeSetId", m_changeSetId);

  }

  if(m_changeSetArnHasBeenSet)
  {
   payload.WithString("ChangeSetArn", m_changeSetArn);

  }

  if(m_changeSetNameHasBeenSet)
  {
   payload.WithString("ChangeSetName", m_changeSetName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChangeStatusMapper::GetNameForChangeStatus(m_status));
  }

  if(m_entityIdListHasBeenSet)
  {
   Array<JsonValue> entityIdListJsonList(m_entityIdList.size());
   for(unsigned entityIdListIndex = 0; entityIdListIndex < entityIdListJsonList.GetLength(); ++entityIdListIndex)
   {
     entityIdListJsonList[entityIdListIndex].AsString(m_entityIdList[entityIdListIndex]);
   }
   payload.WithArray("EntityIdList", std::move(entityIdListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws