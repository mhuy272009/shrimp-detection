# 🦐 Shrimp Detection & Smart Water Quality Alarm System

[![Status](https://img.shields.io/badge/Status-Completed-success)]()
[![Conference](https://img.shields.io/badge/Conference-IWISE%202026-blue)]()
[![Tech Stack](https://img.shields.io/badge/Tech%20Stack-Python%20|%20YOLO%20|%20Arduino%20|%20IoT-orange)]()

An intelligent aquaculture monitoring solution that integrates **Computer Vision** for real-time shrimp disease detection (such as Black Gill Disease) with an **IoT hardware alarm and water quality monitoring system**.

---

## 📅 Project Timeline & Development Log

### Jan 19, 2026 — Training AI Model to Detect Shrimps
Initial dataset preparation and AI model training to detect shrimp health conditions.

![Training AI Model 1](https://github.com/user-attachments/assets/48533f62-bbbd-4da4-a4b2-aab479ca8fb2)
![Training AI Model 2](https://github.com/user-attachments/assets/84a61ad0-3fd2-4707-99c2-852fc6703598)
![Training AI Model 3](https://github.com/user-attachments/assets/94eb37a3-c8b7-4590-a6c4-d1bd69df62a7)
![Training AI Model 4](https://github.com/user-attachments/assets/c44a8f0c-6782-49ba-82c7-0c3aa430b0e7)
![Training AI Model 5](https://github.com/user-attachments/assets/aea555d1-2af6-47dd-ba9f-fd8531c7e5e3)
![Training AI Model 6](https://github.com/user-attachments/assets/2d36e018-8983-4e8a-a106-1d6de85d0eb8)
![Training AI Model 7](https://github.com/user-attachments/assets/52323987-8f1d-442e-bb7a-67ae61402c7c)
![Training AI Model 8](https://github.com/user-attachments/assets/22414477-b8b5-4a59-bd48-5cb979e095d1)
![Training AI Model 9](https://github.com/user-attachments/assets/bc9f4dff-a83a-48ab-ac4a-7537e36ad0e6)
![Training AI Model 10](https://github.com/user-attachments/assets/4984599c-63ee-43e7-ae4c-b1236bfdeb45)

---

### Jan 30, 2026 — Hardware Design & Installation

#### Designing Circuit on Tinkercad
![Tinkercad Design 1](https://github.com/user-attachments/assets/07102d5a-a165-47be-818b-a63711d17a16)
![Tinkercad Design 2](https://github.com/user-attachments/assets/6a4043ec-df22-4323-a976-f2f500caeaf8)

#### Circuit Installation and Cabling
![Circuit Installation](https://github.com/user-attachments/assets/f906f17f-53a6-4432-bf70-9372dfb0051d)

---

### Feb 6, 2026 — Hardware Finalization
Finalizing circuit schematics, wiring, and core hardware setup.

![Hardware 1](https://github.com/user-attachments/assets/2273838e-f2cd-40de-96c4-41330439e8dd)
![Hardware 2](https://github.com/user-attachments/assets/ce91c40f-924a-4f9f-b81d-e928b5486042)

---

### Feb 7, 2026 — Simulation & Model Optimization

#### Simulating the Fire & Alarm System on Wokwi
![Wokwi Simulation 1](https://github.com/user-attachments/assets/5041f297-1244-40a0-a6f8-188963262499)
![Wokwi Simulation 2](https://github.com/user-attachments/assets/e9c1f800-466e-4628-8fd3-4bf2319095be)
![Wokwi Simulation 3](https://github.com/user-attachments/assets/a28ed059-8683-41a5-8529-d769e386d3a3)
![Wokwi Simulation 4](https://github.com/user-attachments/assets/1f72980e-750b-42a0-be5f-36d8aa984b7d)
![Wokwi Simulation 5](https://github.com/user-attachments/assets/ee1cb15d-a955-4406-813f-21732b9c1a7e)
![Wokwi Simulation 6](https://github.com/user-attachments/assets/2ce76f9e-ce45-412e-8b61-9dd1d92b9148)

#### Model Refinement (NVIDIA RTX Pro 6000 Workstation)
Refining the instance segmentation and detection model for infected shrimp recognition.

##### Evaluation Metrics
* **Precision (Bounding Box):**  
  ![precision B](https://github.com/user-attachments/assets/99491d2a-607b-4d1b-aaea-3d2dbf034c09)
* **Recall (Bounding Box):**  
  ![recall B](https://github.com/user-attachments/assets/4aebcbf8-feb7-4903-a567-512d31570ba3)
* **mAP50 (Bounding Box):**  
  ![mAP50 B](https://github.com/user-attachments/assets/9ccf01ff-3529-45bc-bf50-6be953587e2e)
* **mAP50-95 (Bounding Box):**  
  ![mAP50-95 B](https://github.com/user-attachments/assets/25b7cebf-f47a-4d82-bd16-d238d8d85bd8)
* **Precision (Mask):**  
  ![precision M](https://github.com/user-attachments/assets/09f94177-c088-4600-a7aa-95b5d8867518)
* **Recall (Mask):**  
  ![recall M](https://github.com/user-attachments/assets/ac344930-9cb6-4257-8161-c017250de5d3)
* **mAP50 (Mask):**  
  ![mAP50 M](https://github.com/user-attachments/assets/8e9b1072-ee8b-44d3-aaed-ec3d385f4579)
* **mAP50-95 (Mask):**  
  ![mAP50-95 M](https://github.com/user-attachments/assets/eddf9b1c-27a7-44b3-82a7-3b0cd52f696a)

##### Training Loss
![box loss](https://github.com/user-attachments/assets/ea3dcb7c-5414-4535-8cf5-8ff70f6703e9)
![seg loss](https://github.com/user-attachments/assets/102c57dc-f8e1-41cb-baa8-6ce23fde27b0)
![cls loss](https://github.com/user-attachments/assets/01d4dea6-c7bf-4e76-9361-b79b6509d9e8)
![dfl loss](https://github.com/user-attachments/assets/c97b49e1-96f5-46a5-a364-d5665eb3bbc5)
![sem loss](https://github.com/user-attachments/assets/3c7c38b3-2ad8-40a6-8011-9e3607e2dcc3)

##### Validation Loss
![box loss val](https://github.com/user-attachments/assets/b4ac4524-059e-48c2-8ee2-6f32b97f4b95)
![seg loss val](https://github.com/user-attachments/assets/799b928b-121d-46cf-801f-53930a5fcb4e)
![cls loss val](https://github.com/user-attachments/assets/01f53a4e-9ed6-44fd-939e-10d77d90d17e)
![dfl loss val](https://github.com/user-attachments/assets/8e403cb1-7a36-40c6-b33b-72fc9e2af32b)
![sem loss val](https://github.com/user-attachments/assets/afa1268b-55f2-41cb-b88c-35c8aeb256c0)

##### Learning Rate & Validation Plots
![learning rate](https://github.com/user-attachments/assets/1ccf6168-5b90-498d-9563-04d035608579)
![Confusion Matrix](https://github.com/user-attachments/assets/14ead750-2a16-4f1d-85e7-5ff062c7df12)
![Precision-Recall Curve](https://github.com/user-attachments/assets/8fb91640-4c8a-4806-9084-85db393f251b)
![F1-Confidence Curve](https://github.com/user-attachments/assets/cfe328de-1441-4fc6-96a4-195dee37b87f)
![Precision-Confidence Curve](https://github.com/user-attachments/assets/d8fe5a8e-7ee8-4700-97c9-a7f13f5b6688)
![Recall-Confidence Curve](https://github.com/user-attachments/assets/a765db7e-3986-47f1-bda2-f16edb3d72fd)

##### Model Inference Outputs
![Output 1](https://github.com/user-attachments/assets/273ce59b-a477-4713-aadc-ed6a4bd84c6a)
![Output 2](https://github.com/user-attachments/assets/b8979a35-3deb-4b0b-9108-a10a45aa7cc6)

---

### Feb 11, 2026 — Final Presentation & Research Poster
Finalized poster and presentation for the IWISE 2026 Conference.

![IWISE 2026 Poster](https://github.com/user-attachments/assets/373f8501-45e1-4122-b699-ee4b42d20ed8)

---

## 📂 Repository Structure

```text
shrimp-detection/
├── Shrimp Detection | Fire Alarm System/         # Embedded system & alarm code
├── Water Quality Alarm System (OLED Display + L...)/ # OLED display module code
├── Water Quality Alarm System (Piezo)/              # Piezo sounder alert code
├── bom.csv                                          # Bill of Materials
├── hub.ipynb                                        # Training notebook & experiments
└── README.md                                        # Documentation
