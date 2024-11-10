package database

import (
	"fmt"
	"log"
	"os"

	"gorm.io/driver/postgres"
	"gorm.io/gorm"

	"cadastro-api/models"
)

var (
	DB  *gorm.DB
	err error
)

func DBConnection() {
	dns := fmt.Sprintf(
		"host=%s user=%s password=%s dbname=%s port=5432 sslmode=disable",
		os.Getenv("DB_HOST"),
		os.Getenv("DB_USER"),
		os.Getenv("DB_PASSWORD"),
		os.Getenv("DB_NAME"),
	)
	DB, err = gorm.Open(postgres.Open(dns))
	if err != nil {
		fmt.Println("Erro ao conectar com database")
		log.Panic(err.Error())
	}
	DB.AutoMigrate(&models.User{})
}
