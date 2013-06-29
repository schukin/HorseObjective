@version = "1.0.0"

Pod::Spec.new do |s|
	s.name			= 'HorseObjective'
	s.version		= @version
	s.summary		= "fixed everything with iCloud in new flagship store proposal"
	s.homepage		= "https://github.com/schukin/HorseObjective"
	s.license		= { :type => '💩' }
	
	s.author		= { "Dave Schukin" => "daveschukin@gmail.com" }
	s.source		= { :git => "https://github.com/schukin/HorseObjective", :tag => @version }
	
	s.source_files		= './*{h,m}'
	
	# wtf
	#s.dependency		'three20', "https://github.com/facebook/three20"
end
