Pod::Spec.new do |s|
  s.name         =  'YRDropdownView'
  s.version      =  '0.1'
  s.summary      =  'Forked YRDropdownView.'
  s.homepage     =  'github.com'
s.author = 'Marco Marengo'
  s.source       =  { :git => 'https://github.com/badlands/YRDropdownView.git', :tag => '0.1' }
  s.license      =  'MIT License'
  
  s.source_files = 'YRDropdownView'
  
  # Platform setup
  s.requires_arc = false
  s.ios.deployment_target = '5.0'
end
