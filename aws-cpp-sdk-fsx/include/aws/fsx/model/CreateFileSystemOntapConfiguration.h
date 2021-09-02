﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OntapDeploymentType.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>The ONTAP configuration properties of the FSx for NetApp ONTAP file system
   * that you are creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemOntapConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API CreateFileSystemOntapConfiguration
  {
  public:
    CreateFileSystemOntapConfiguration();
    CreateFileSystemOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CreateFileSystemOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline CreateFileSystemOntapConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline CreateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline const OntapDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline void SetDeploymentType(const OntapDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline void SetDeploymentType(OntapDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithDeploymentType(const OntapDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the ONTAP file system deployment type to use in creating the file
     * system.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithDeploymentType(OntapDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const{ return m_endpointIpAddressRange; }

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline void SetEndpointIpAddressRange(const Aws::String& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = value; }

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline void SetEndpointIpAddressRange(Aws::String&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::move(value); }

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline void SetEndpointIpAddressRange(const char* value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange.assign(value); }

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithEndpointIpAddressRange(const Aws::String& value) { SetEndpointIpAddressRange(value); return *this;}

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithEndpointIpAddressRange(Aws::String&& value) { SetEndpointIpAddressRange(std::move(value)); return *this;}

    /**
     * <p>Specifies the IP address range in which the endpoints to access your file
     * system will be created. By default, Amazon FSx selects an unused IP address
     * range for you from the 198.19.* range.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithEndpointIpAddressRange(const char* value) { SetEndpointIpAddressRange(value); return *this;}


    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline const Aws::String& GetFsxAdminPassword() const{ return m_fsxAdminPassword; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline bool FsxAdminPasswordHasBeenSet() const { return m_fsxAdminPasswordHasBeenSet; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline void SetFsxAdminPassword(const Aws::String& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = value; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline void SetFsxAdminPassword(Aws::String&& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = std::move(value); }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline void SetFsxAdminPassword(const char* value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword.assign(value); }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithFsxAdminPassword(const Aws::String& value) { SetFsxAdminPassword(value); return *this;}

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithFsxAdminPassword(Aws::String&& value) { SetFsxAdminPassword(std::move(value)); return *this;}

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user that you
     * can use to administer your file system using the ONTAP CLI and REST API.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithFsxAdminPassword(const char* value) { SetFsxAdminPassword(value); return *this;}


    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }

    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }

    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }

    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }

    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}

    /**
     * <p>The SSD IOPS configuration for the Amazon FSx for NetApp ONTAP file
     * system.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetPreferredSubnetId() const{ return m_preferredSubnetId; }

    
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }

    
    inline void SetPreferredSubnetId(const Aws::String& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = value; }

    
    inline void SetPreferredSubnetId(Aws::String&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::move(value); }

    
    inline void SetPreferredSubnetId(const char* value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId.assign(value); }

    
    inline CreateFileSystemOntapConfiguration& WithPreferredSubnetId(const Aws::String& value) { SetPreferredSubnetId(value); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithPreferredSubnetId(Aws::String&& value) { SetPreferredSubnetId(std::move(value)); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithPreferredSubnetId(const char* value) { SetPreferredSubnetId(value); return *this;}


    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline CreateFileSystemOntapConfiguration& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline CreateFileSystemOntapConfiguration& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline CreateFileSystemOntapConfiguration& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the VPC route tables in which your file system's endpoints will be
     * created. You should specify all VPC route tables associated with the subnets in
     * which your clients are located. By default, Amazon FSx selects your VPC's
     * default route table.</p>
     */
    inline CreateFileSystemOntapConfiguration& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }


    
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    
    inline CreateFileSystemOntapConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline CreateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline CreateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}

  private:

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    OntapDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    Aws::String m_endpointIpAddressRange;
    bool m_endpointIpAddressRangeHasBeenSet;

    Aws::String m_fsxAdminPassword;
    bool m_fsxAdminPasswordHasBeenSet;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
