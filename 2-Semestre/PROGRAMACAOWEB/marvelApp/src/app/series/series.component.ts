import { CharactersApiService } from './../characters/character/shared/characters-api.service';
import { Observable } from 'rxjs';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-series',
  templateUrl: './series.component.html',
  styleUrls: ['./series.component.css']
})
export class SeriesComponent implements OnInit {

  allSeries!: Observable<any>;

  constructor(private serviceApiM: CharactersApiService) { }

  ngOnInit(): void {
    this.allSeries= this.serviceApiM.getAllSeries();
  }

}
