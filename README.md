# 🖼️ Gallery Management System — AI-Powered Image Organizer

<div align="center">

**Create albums, organize images, and get AI-generated descriptions — all in one place**

*Dynamic Albums • Smart AI Captions • Undo/Redo History • Node.js + C++*

[![GitHub stars](https://img.shields.io/github/stars/mayankOli-09/Gallery_Management_System?style=social)](https://github.com/mayankOli-09/Gallery_Management_System)
[![Node.js](https://img.shields.io/badge/Node.js-18%2B-green?logo=node.js)](https://nodejs.org/)
[![C++](https://img.shields.io/badge/C%2B%2B-17-blue?logo=cplusplus)](https://isocpp.org/)
[![Gemini API](https://img.shields.io/badge/Powered%20by-Google%20Gemini-orange?logo=google)](https://ai.google.dev/)

</div>

---

## 🎯 What is Gallery Management System?

Gallery Management System is a **cutting-edge web application** that revolutionizes how you handle image-related tasks. It combines an **interactive gallery interface** with **Google Gemini AI** to automatically generate intelligent, context-aware descriptions for every image — enhancing accessibility, SEO, and metadata management.

No more manual captioning or clunky album tools. Gallery Management System brings it all together.

---

## ✨ Key Features

| Feature | Description |
|--------|-------------|
| 🖼️ **Interactive Gallery** | Drag-and-drop albums, zoomable previews, and responsive grid layouts |
| ⬆️ **Efficient Upload/Delete** | Progress tracking, bulk operations, and file validation |
| ↩️ **Undo/Redo Stack** | Full history management powered by a custom state machine |
| 🤖 **AI-Generated Descriptions** | Gemini API generates natural language captions for every image |
| ⚡ **Performance Optimized** | Lazy loading, compression, and caching for lightning-fast interactions |

---

## 🚀 Quick Start

### Prerequisites

Make sure you have the following installed:

- **Node.js 18+**
- A **Google Gemini API key** → [Get one free here](https://ai.google.dev/)

### Setup & Run

```bash
# 1. Clone the repository
git clone https://github.com/mayankOli-09/Gallery_Management_System.git
cd Gallery_Management_System

# 2. Install dependencies
npm install

# 3. Set up your environment
cp .env.example .env
# Open .env and add your Gemini API key

# 4. Run the dev server
npm run dev
```

Then open your browser at **`http://localhost:3000`** and start organizing! 🗂️

---

## 🔑 API Key Configuration

In your `.env` file:

```env
GEMINI_API_KEY=your_google_gemini_api_key
PORT=3000
```

> **Get your free API key** at [ai.google.dev](https://ai.google.dev/) — the free tier is more than enough to run this project.

---

## 🏗️ Project Structure
