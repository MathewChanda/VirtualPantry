//
//  SendPantryItemButton.swift
//  VirtualPantry
//
//  Created by Mathew Chanda on 11/30/20.
//

import UIKit

class SendPantryItemButton: UIButton {

    // Called when we creating the button programmatically
    override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    // Called when we creating the button on the storyboard
    required init?(coder: NSCoder) {
        super.init(coder: coder)
        setup()
    }
    
    // Rendering @IBDesignable
    override func prepareForInterfaceBuilder() {
        super.prepareForInterfaceBuilder()
           setup()
    }
    
    // Configure the button
    func setup(){
        self.layer.cornerRadius = 15
        self.layer.masksToBounds = true
        self.setTitle("Send Item to Shopping List", for: .normal)
        self.setTitleColor(.white, for: .normal)
        self.backgroundColor = UIColor.black
    }
}
