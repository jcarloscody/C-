import { Observable } from 'rxjs';
import { CharactersApiService } from './character/shared/characters-api.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-characters',
  templateUrl: './characters.component.html',
  styleUrls: ['./characters.component.css']
})
export class CharactersComponent implements OnInit {

  constructor(private characterSvc: CharactersApiService) { }

  allCaracters!: Observable<any>;

  ngOnInit(): void {
    this.getCharacters();
  }

  getCharacters(){
    this.allCaracters =  this.characterSvc.getAllCharacters();
  }

}
