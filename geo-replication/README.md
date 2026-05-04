# Geo-Replication SQL Solution for Insurance Company

This is a sample OpenShift-based SQL solution demonstrating geo-redundancy for an insurance company, following European industry best practices for compliance, GDPR, data sovereignty, and geo-redundancy within Germany.

## Overview

The solution uses PostgreSQL as the SQL database, deployed using the CrunchyData PostgreSQL Operator on OpenShift. It demonstrates a geo-redundant setup with primary and replica clusters in different German regions (simulated as namespaces).

## Software Stack

- **Platform**: Red Hat OpenShift (Kubernetes-based)
- **Database**: PostgreSQL (open-source, GDPR-compliant)
- **Operator**: CrunchyData PostgreSQL Operator (certified for OpenShift)
- **Encryption**: TLS for in-transit, AES-256 for at-rest
- **Geo-Redundancy**: Logical replication between primary (Frankfurt) and replica (Berlin) sites
- **Compliance**: RBAC, audit logging, data sovereignty (all data stays within German data centers)

## Architecture

- **Primary Site (Frankfurt)**: Main PostgreSQL cluster with read-write access
- **Replica Site (Berlin)**: PostgreSQL replica cluster with read-only access, synchronized via logical replication
- **Failover**: Manual or automated failover to replica in case of primary failure
- **Backup**: Automated backups with retention policies

## Deployment

1. Install CrunchyData PostgreSQL Operator
2. Create namespaces for each site
3. Deploy PostgreSQL clusters
4. Configure logical replication
5. Deploy sample insurance application

## Files

- `namespace-frankfurt.yaml`: Namespace for Frankfurt site
- `namespace-berlin.yaml`: Namespace for Berlin site
- `operator-install.yaml`: CrunchyData operator installation
- `postgres-primary.yaml`: Primary PostgreSQL cluster configuration
- `postgres-replica.yaml`: Replica PostgreSQL cluster configuration
- `replication-setup.yaml`: Logical replication configuration
- `sample-app.yaml`: Sample insurance application using the database
- `backup-config.yaml`: Backup configuration

## Security Considerations

- All data encrypted at rest and in transit
- RBAC implemented for access control
- Audit logs enabled
- Network policies restrict traffic
- Secrets management using OpenShift secrets

## Compliance

- GDPR: Data minimization, consent management, right to erasure
- Data Sovereignty: All infrastructure in German data centers
- Industry Standards: ISO 27001, BSI IT-Grundschutz

This is a demonstration setup. In production, consult with compliance officers and use certified configurations.