import { Component, Input, OnInit } from '@angular/core';

@Component({
  selector: 'app-storie',
  templateUrl: './storie.component.html',
  styleUrls: ['./storie.component.css']
})
export class StorieComponent implements OnInit {

  @Input() storie: any;

  constructor() { }

  ngOnInit(): void {
  }

}
