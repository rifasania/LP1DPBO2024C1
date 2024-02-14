<!-- Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 1 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... -->

<?php

require ('DPR.php');

$icung = new DPR('1', 'Icung', 'Pengawasan', 'PKS');
$acil = new DPR('2', 'Acil', 'Kaderisasi', 'Golkar');
$upin = new DPR('3', 'Upin', 'Komunikasi', 'Perindo');

echo "List Anggota DPR :";
echo '<br/>';
echo $icung->getId() . ". " . $icung->getNama() . " " . $icung->getBidang() . " " . $icung->getPartai();
echo '<br/>';
echo $acil->getId() . ". " . $acil->getNama() . " " . $acil->getBidang() . " " . $acil->getPartai();
echo '<br/>';
echo $upin->getId() . ". " . $upin->getNama() . " " . $upin->getBidang() . " " . $upin->getPartai();
echo '<br/> <br/>';

echo "Mengubah Data pada Data dengan ID 3.";
echo '<br/>';
$upin->setNama('Upin');
$upin->setBidang('Pendidikan');
$upin->setPartai('Demokrat');

echo "List Anggota DPR :";
echo '<br/>';
echo $icung->getId() . ". " . $icung->getNama() . " " . $icung->getBidang() . " " . $icung->getPartai();
echo '<br/>';
echo $acil->getId() . ". " . $acil->getNama() . " " . $acil->getBidang() . " " . $acil->getPartai();
echo '<br/>';
echo $upin->getId() . ". " . $upin->getNama() . " " . $upin->getBidang() . " " . $upin->getPartai();
echo '<br/>';

?>