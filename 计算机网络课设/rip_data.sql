-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: localhost    Database: rip_datas
-- ------------------------------------------------------
-- Server version	8.0.18

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `net`
--

DROP TABLE IF EXISTS `net`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `net` (
  `net_ip_mask` varchar(30) NOT NULL,
  `net_name` varchar(45) NOT NULL,
  PRIMARY KEY (`net_ip_mask`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `net`
--

LOCK TABLES `net` WRITE;
/*!40000 ALTER TABLE `net` DISABLE KEYS */;
INSERT INTO `net` VALUES ('130.10.0.0/16','N1'),('130.11.0.0/16','N2'),('195.2.4.0/24','N3'),('195.2.5.0/24','N4'),('195.2.6.0/24','N5'),('205.5.5.0/24','N6'),('205.5.6.0/24','N7');
/*!40000 ALTER TABLE `net` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `router`
--

DROP TABLE IF EXISTS `router`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `router` (
  `router_id` int(11) NOT NULL AUTO_INCREMENT,
  `router_name` varchar(8) NOT NULL,
  `int1_net` varchar(30) DEFAULT NULL,
  `int2_net` varchar(30) DEFAULT NULL,
  `int3_net` varchar(30) DEFAULT NULL,
  `int4_net` varchar(30) DEFAULT NULL,
  `int1_ip` varchar(30) DEFAULT NULL,
  `int2_ip` varchar(30) DEFAULT NULL,
  `int3_ip` varchar(30) DEFAULT NULL,
  `int4_ip` varchar(30) DEFAULT NULL,
  PRIMARY KEY (`router_id`),
  UNIQUE KEY `router_name_UNIQUE` (`router_name`),
  UNIQUE KEY `int1_UNIQUE` (`int1_net`),
  UNIQUE KEY `int2_UNIQUE` (`int2_net`),
  UNIQUE KEY `int3_UNIQUE` (`int3_net`),
  UNIQUE KEY `int4_UNIQUE` (`int4_net`),
  UNIQUE KEY `int1_ip_UNIQUE` (`int1_ip`),
  UNIQUE KEY `int2_ip_UNIQUE` (`int2_ip`),
  UNIQUE KEY `int3_ip_UNIQUE` (`int3_ip`),
  UNIQUE KEY `int4_ip_UNIQUE` (`int4_ip`),
  CONSTRAINT `net_in1_k` FOREIGN KEY (`int1_net`) REFERENCES `net` (`net_ip_mask`),
  CONSTRAINT `net_in2_k` FOREIGN KEY (`int2_net`) REFERENCES `net` (`net_ip_mask`),
  CONSTRAINT `net_in3_k` FOREIGN KEY (`int3_net`) REFERENCES `net` (`net_ip_mask`),
  CONSTRAINT `net_in4_k` FOREIGN KEY (`int4_net`) REFERENCES `net` (`net_ip_mask`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `router`
--

LOCK TABLES `router` WRITE;
/*!40000 ALTER TABLE `router` DISABLE KEYS */;
INSERT INTO `router` VALUES (2,'R3','195.2.5.0/24','195.2.6.0/24',NULL,NULL,'195.2.5.2','195.2.6.1',NULL,NULL),(3,'R2','195.2.4.0/24','195.2.5.0/24','130.10.0.0/16',NULL,'195.2.4.1','195.2.5.1','130.10.0.1',NULL),(4,'R1','130.10.0.0/16','130.11.0.0/16',NULL,NULL,'130.10.0.2','130.11.0.2',NULL,NULL),(5,'R4','130.11.0.0/16','205.5.5.0/24','205.5.6.0/24',NULL,'130.11.0.1','205.5.5.1','205.5.6.1',NULL);
/*!40000 ALTER TABLE `router` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `router_table`
--

DROP TABLE IF EXISTS `router_table`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `router_table` (
  `node_id` int(11) NOT NULL AUTO_INCREMENT,
  `des_net` varchar(32) NOT NULL,
  `mask_code` varchar(20) NOT NULL,
  `router_id` int(11) NOT NULL,
  `r_name` varchar(20) DEFAULT NULL,
  `cost` int(11) NOT NULL,
  `next_hop` varchar(20) DEFAULT NULL,
  `nr_name` varchar(20) DEFAULT NULL,
  `next_ip` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`node_id`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `router_table`
--

LOCK TABLES `router_table` WRITE;
/*!40000 ALTER TABLE `router_table` DISABLE KEYS */;
INSERT INTO `router_table` VALUES (1,'130.10.0.0/16','255.255.0.0',3,'R2',1,'int3_net','int3_net','no'),(2,'130.10.0.0/16','255.255.0.0',4,'R1',1,'int1_net','int1_net','no'),(3,'130.10.0.0/16','255.255.0.0',2,'R3',2,'3','R2','195.2.5.1'),(4,'130.10.0.0/16','255.255.0.0',5,'R4',2,'4','R1','130.11.0.2'),(5,'130.11.0.0/16','255.255.0.0',4,'R1',1,'int2_net','int2_net','no'),(6,'130.11.0.0/16','255.255.0.0',5,'R4',1,'int1_net','int1_net','no'),(7,'130.11.0.0/16','255.255.0.0',3,'R2',2,'4','R1','130.10.0.2'),(8,'130.11.0.0/16','255.255.0.0',2,'R3',3,'3','R2','195.2.5.1'),(9,'195.2.4.0/24','255.255.255.0',3,'R2',1,'int1_net','int1_net','no'),(10,'195.2.4.0/24','255.255.255.0',2,'R3',2,'3','R2','195.2.5.1'),(11,'195.2.4.0/24','255.255.255.0',4,'R1',2,'3','R2','130.10.0.1'),(12,'195.2.4.0/24','255.255.255.0',5,'R4',3,'4','R1','130.11.0.2'),(13,'195.2.5.0/24','255.255.255.0',2,'R3',1,'int1_net','int1_net','no'),(14,'195.2.5.0/24','255.255.255.0',3,'R2',1,'int2_net','int2_net','no'),(15,'195.2.5.0/24','255.255.255.0',4,'R1',2,'3','R2','130.10.0.1'),(16,'195.2.5.0/24','255.255.255.0',5,'R4',3,'4','R1','130.11.0.2'),(17,'195.2.6.0/24','255.255.255.0',2,'R3',1,'int2_net','int2_net','no'),(18,'195.2.6.0/24','255.255.255.0',3,'R2',2,'2','R3','195.2.5.2'),(19,'195.2.6.0/24','255.255.255.0',4,'R1',3,'3','R2','130.10.0.1'),(20,'195.2.6.0/24','255.255.255.0',5,'R4',4,'4','R1','130.11.0.2'),(21,'205.5.5.0/24','255.255.255.0',5,'R4',1,'int2_net','int2_net','no'),(22,'205.5.5.0/24','255.255.255.0',4,'R1',2,'5','R4','130.11.0.1'),(23,'205.5.5.0/24','255.255.255.0',3,'R2',3,'4','R1','130.10.0.2'),(24,'205.5.5.0/24','255.255.255.0',2,'R3',4,'3','R2','195.2.5.1'),(25,'205.5.6.0/24','255.255.255.0',5,'R4',1,'int3_net','int3_net','no'),(26,'205.5.6.0/24','255.255.255.0',4,'R1',2,'5','R4','130.11.0.1'),(27,'205.5.6.0/24','255.255.255.0',3,'R2',3,'4','R1','130.10.0.2'),(28,'205.5.6.0/24','255.255.255.0',2,'R3',4,'3','R2','195.2.5.1');
/*!40000 ALTER TABLE `router_table` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'rip_datas'
--

--
-- Dumping routines for database 'rip_datas'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-29 11:08:01
